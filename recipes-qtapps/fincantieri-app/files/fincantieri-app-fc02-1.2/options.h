#ifndef OPTIONS_H
#define OPTIONS_H

#include <QObject>
#include <QCommandLineParser>

class MyOptions : public QObject {
    Q_OBJECT

    Q_PROPERTY(bool skip_timer MEMBER m_skip_timer CONSTANT)

public:
    MyOptions(QCoreApplication *app); //  : m_skip_timer(st);
    bool m_skip_timer;
    QString m_interface;
private:
    QCommandLineParser parser;
};

#endif // OPTIONS_H
