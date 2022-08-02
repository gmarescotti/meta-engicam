#pragma once
#include <QAbstractListModel>
#include <QStringList>
#include <QQueue>

typedef QPair<QString,int> EnumType;

class EnumModel : public QAbstractListModel
{
    Q_OBJECT

    Q_PROPERTY(int selected MEMBER m_selected NOTIFY selectedChanged)
    Q_PROPERTY(QString item_selected MEMBER m_item_selected NOTIFY selectedChanged)
    Q_PROPERTY(int preselected MEMBER m_preselected NOTIFY selectedChanged)
    Q_PROPERTY(int prepreselected MEMBER m_prepreselected NOTIFY selectedChanged)
    Q_PROPERTY(QString name MEMBER m_name CONSTANT)

signals:
    void selectedChanged(int index);

public:
    enum EnumRoles {
        NameRole = Qt::UserRole + 1,
        ValueRole
    };

    EnumModel(QString name, QObject *parent = nullptr);
    virtual ~EnumModel();

    void add(EnumType);

    int rowCount(const QModelIndex & parent = QModelIndex()) const;

    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;

public slots:
    void changeSelection(int selection);

protected:
    QHash<int, QByteArray> roleNames() const;

private:
    QList<EnumType> m_enum;
    const QString m_name;
    int m_selected, m_preselected, m_prepreselected;
    QString m_item_selected;
};
