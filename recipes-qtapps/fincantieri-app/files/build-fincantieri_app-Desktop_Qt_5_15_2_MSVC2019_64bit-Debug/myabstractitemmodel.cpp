#include "myabstractitemmodel.h"
#include <QModelIndex>

EnumModel::EnumModel(QString name, QObject *parent)
    : m_name(name), QAbstractListModel(parent)
{
    m_selected = m_preselected = m_prepreselected = 0;
    m_item_selected = "-";
}

EnumModel::~EnumModel() {}

void EnumModel::add(EnumType item)
{
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    m_enum << item;
    endInsertRows();
}

void EnumModel::changeSelection(int selection) {
    selection = qMin(m_enum.count()-1, selection);
    if (m_selected != selection) { // fix: don't emit same selection (even for async msgs)
        m_prepreselected = m_preselected;
        m_preselected = m_selected;
        m_selected = selection;
        m_item_selected = m_enum[m_selected].first;
    }
    emit selectedChanged(selection);
}

int EnumModel::rowCount(const QModelIndex & parent) const {
    Q_UNUSED(parent)
    return m_enum.count();
}

QVariant EnumModel::data(const QModelIndex & index, int role) const {
    if (index.row() < 0 || index.row() >= m_enum.count())
        return QVariant();

    const EnumType &animal = m_enum[index.row()];
    if (role == NameRole)
        return animal.first;
    else if (role == ValueRole)
        return animal.second;
    return QVariant();
}

QHash<int, QByteArray> EnumModel::roleNames() const {
    QHash<int, QByteArray> roles;
    roles[NameRole] = "name";
    roles[ValueRole] = "value";
    return roles;
}
