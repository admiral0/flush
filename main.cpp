#include <QCoreApplication>
#include <QProcess>
#include <phonon/MediaObject>
#include <phonon/MediaSource>
#include <phonon/AudioOutput>
int main(int argc, char** argv)
{
    QCoreApplication app(argc, argv);
    app.setApplicationName("Flush");
    QStringList args=app.arguments();
    args.removeFirst();
    QString appl=args.at(0);
    args.removeFirst();
    QProcess p;
    p.setProcessChannelMode(QProcess::ForwardedChannels);
    p.start(appl,args);
    p.waitForFinished(-1);
    Phonon::MediaObject *mediaObject = new Phonon::MediaObject();
    Phonon::AudioOutput *audioOutput = new Phonon::AudioOutput(Phonon::MusicCategory);
    Phonon::createPath(mediaObject, audioOutput);
    if(p.exitCode()==0)
      mediaObject->setCurrentSource(Phonon::MediaSource(":/flush.ogg"));
    else
      mediaObject->setCurrentSource(Phonon::MediaSource(":/sadtrombone.ogg"));
    mediaObject->play();
    QObject::connect(mediaObject,SIGNAL(finished()),&app,SLOT(quit()));
    return app.exec();
}
