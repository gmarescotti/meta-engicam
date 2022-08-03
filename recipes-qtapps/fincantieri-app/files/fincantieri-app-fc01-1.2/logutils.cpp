#include "logutils.h"
#include <QFile>
#include <QDateTime>
#include <QDir>
#include <QTextStream>

#if defined(Q_OS_WIN)
const QString logFolderName = "C:/Windows/Temp/fincantieri/";
#else
const QString logFolderName = "/var/log/fincantieri/";
#endif

static void rollback();

static QString logFileName;

bool initLogging();
void myMessageHandler(QtMsgType type, const QMessageLogContext &context, const QString& msg);

#define LOGSIZE 1024 * 100 //log size in bytes
#define LOGFILES 5

static void deleteOldLogs()
{
    QDir dir;
    dir.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
    dir.setSorting(QDir::Time | QDir::Reversed);
    dir.setPath(logFolderName);

    QFileInfoList list = dir.entryInfoList();
    if (list.size() <= LOGFILES)
    {
      return; //no files to delete
    } else
    {
      for (int i = 0; i < (list.size() - LOGFILES); i++)
      {
        QString path = list.at(i).absoluteFilePath();
        QFile file(path);
        file.remove();
      }
    }
}

static void initLogFileName()
{
    logFileName = QString(logFolderName + "log_%1_%2.txt")
              .arg(QDate::currentDate().toString("yyyyMMdd"))
              .arg(QTime::currentTime().toString("hh-mm-ss_zzz"));
}

static void myMessageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    QDateTime datatime = QDateTime::currentDateTime();
    QString formattedDateTime = datatime.toString("dd.MM.yyyy hh:mm:ss");
    QByteArray localMsg = msg.toLocal8Bit();

    rollback();

    const char *file = context.file ? context.file : "";
    const char *function = context.function ? context.function : "";

    QString txt;
    switch (type) {
        case QtDebugMsg:
            txt = QString("%1: Debug: %2, file: %3, line: %4, function: %5").arg(formattedDateTime).arg(localMsg.constData()).arg(file).arg(context.line).arg(function);
        break;
        case QtInfoMsg:
            txt = QString("%1: Info: %2, file: %3, line: %4, function: %5").arg(formattedDateTime).arg(localMsg.constData()).arg(file).arg(context.line).arg(function);
        break;
        case QtWarningMsg:
            txt = QString("%1: Warning: %2, file: %3, line: %4, function: %5").arg(formattedDateTime).arg(localMsg.constData()).arg(file).arg(context.line).arg(function);
        break;
        case QtCriticalMsg:
            txt = QString("%1: Critical: %2, file: %3, line: %4, function: %5").arg(formattedDateTime).arg(localMsg.constData()).arg(file).arg(context.line).arg(function);
        break;
        case QtFatalMsg:
            txt = QString("%1: Fatal: %2, file: %3, line: %4, function: %5").arg(formattedDateTime).arg(localMsg.constData()).arg(file).arg(context.line).arg(function);
        break;
    }

    QFile outFile(logFileName);
    outFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);
    QTextStream ts(&outFile);
    ts.setCodec("UTF-8");
    ts << txt << "\n";
}

static void rollback()
{
    //check file size and if needed create new log!
    QFile outFileCheck(logFileName);
    int size = outFileCheck.size();

    if (size > LOGSIZE) //check current log size
    {
        deleteOldLogs();
        initLogFileName();
    }
}

void initLog()
{
    if (!QDir(logFolderName).exists()) {
        QDir().mkdir(logFolderName);
    }

    deleteOldLogs();
    initLogFileName();
    qInstallMessageHandler(myMessageHandler);
}
