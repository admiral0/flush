#ifndef flush_H
#define flush_H
#include <QCoreApplication>

namespace Phonon {
class MediaObject;
}

class QProcess;


class Flush : public QObject
{
Q_OBJECT
public:
    explicit Flush(int s);
    virtual ~Flush();
private slots:
  
  void exitLoop();

private:
  Phonon::MediaObject *mediaObject;
};

#endif // flush_H
