#include <QCoreApplication>
#include "flush.h"


int main(int argc, char** argv)
{
    QCoreApplication app(argc, argv);
    flush foo;
    return app.exec();
}
