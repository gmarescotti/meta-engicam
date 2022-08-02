#ifndef MYCAN_H
#define MYCAN_H

#include <QObject>
#include <QCanBus>
#include <QCanBusFrame>
#include <QCanBusDevice> // for CanBusError
#include <QLoggingCategory>

#include <QAbstractListModel>

class cantoolsQtSignals;
class cantoolsQtMessages;

Q_DECLARE_LOGGING_CATEGORY(rgm_cantools_cantools)

struct MyListItem
{
    QString timestamp;
    int id;
    int length;
    QString buffer;
};

class CanSnifferModel : public QAbstractListModel
{
    Q_OBJECT
public:
    enum MyRoles {
        TimestampRole = Qt::UserRole + 1,
        IDRole,
        LengthRole,
        BufferRole
    };

    CanSnifferModel(QObject *parent = nullptr, int max_size=1000) : QAbstractListModel(parent), max_size(max_size) {}

    QHash<int, QByteArray> roleNames() const {
        QHash<int, QByteArray> roles;
        roles[TimestampRole] = "timestamp";
        roles[IDRole] = "id";
        roles[LengthRole] = "length";
        roles[BufferRole] = "buffer";
        return roles;
    }

    // void addMyListItem(const MyListItem &item);
    int rowCount(const QModelIndex &  = QModelIndex()) const { return m_list.size();}
    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const {
        switch (role) {
        case TimestampRole:
            return m_list.at(index.row()).timestamp;
        case IDRole:
            return QString::number(m_list.at(index.row()).id, 16);
        case LengthRole:
            return m_list.at(index.row()).length;
        case BufferRole:
            return m_list.at(index.row()).buffer;
        }
        return QVariant();
    }
    // void dropList();

    void append(QString timestamp, int id, int length, QString buffer) {
        if (max_size==0) return; // sniffer feature disabled
        const MyListItem item = MyListItem({timestamp, id, length, buffer});
        beginInsertRows(QModelIndex(), m_list.size(), m_list.size());
        m_list.append(item);
        endInsertRows();
        if (m_list.size() > max_size) {
                beginRemoveRows(QModelIndex(), 0, 0);
                m_list.erase(m_list.begin());
                endRemoveRows();
        }
    }

private:
    QList<MyListItem> m_list;
    
public:
    int max_size;
};

class MyCan: public QObject
{
    Q_OBJECT

public:
    MyCan(QString plugin, QString device, quint32 bitrate, const int sniffer_max_size=1000);
    CanSnifferModel dataList;

signals:
    void on_receive(const QCanBusFrame frame);
    void before_connect_device(QCanBusDevice *device);

public slots:
    bool postconnect();
    void sendFrame(const QCanBusFrame &frame) const;

private slots:
    void processErrors(QCanBusDevice::CanBusError) const;
    void processReceivedFrames();
    void processFramesWritten(qint64);

private:
    QString m_device;
    qint32 m_bitrate;
    const QString m_plugin;

public:
    QCanBusDevice *m_canDevice = nullptr;

public:
    cantoolsQtSignals *signals_store;
    cantoolsQtMessages *messages_store;
};

#endif // MYCAN_H
