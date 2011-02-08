#include "flush.h"

#include <QTimer>
#include <iostream>

flush::flush()
{
    QTimer* timer = new QTimer(this);
    connect( timer, SIGNAL(timeout()), SLOT(output()) );
    timer->start( 1000 );
}

flush::~flush()
{}

void flush::output()
{
    std::cout << "Hello World!" << std::endl;
}

#include "flush.moc"
