#include "flush.h"

#include <QStringList>
#include <QProcess>
#include <phonon/MediaObject>
#include <phonon/MediaSource>
#include <iostream>
Flush::Flush(int s) 
{
    if(s==0){
    mediaObject = Phonon::createPlayer(Phonon::MusicCategory,Phonon::MediaSource(":flush.ogg"));
  }else{
    mediaObject = Phonon::createPlayer(Phonon::MusicCategory,Phonon::MediaSource(":sadtrombone.ogg"));
  }
  connect(mediaObject,SIGNAL(finished()),this,SLOT(exitLoop()));
  mediaObject->play();
}
Flush::~Flush()
{

}
void Flush::exitLoop()
{
  qApp->quit();
}




#include "flush.moc"
