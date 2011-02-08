#ifndef flush_H
#define flush_H

#include <QtCore/QObject>

class flush : public QObject
{
Q_OBJECT
public:
    flush();
    virtual ~flush();
private slots:
    void output();
};

#endif // flush_H
