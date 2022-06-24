#ifndef OPTIONS_H
#define OPTIONS_H

#include <QObject>

class MyOptions : public QObject {
    Q_OBJECT

    Q_PROPERTY(bool skip_timer MEMBER m_skip_timer CONSTANT)

public:
    MyOptions(QObject *parent, bool st); //  : m_skip_timer(st);
    bool m_skip_timer;
};


#endif // OPTIONS_H
