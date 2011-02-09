#include <QCoreApplication>
#include "flush.h"
#include <QProcess>


int main(int argc, char** argv)
{
    QCoreApplication app(argc, argv);
    app.setApplicationName("Flush");
    QStringList args=app.arguments();
    args.removeFirst();
    QString appl=args.at(0);
    args.removeFirst();
    QProcess p;
    p.startDetached(appl,args);
    p.waitForFinished(-1);
    Flush f(p.exitCode());
    return app.exec();
}
