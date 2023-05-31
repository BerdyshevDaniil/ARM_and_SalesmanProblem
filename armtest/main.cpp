#include "arm.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    arm w;
    w.show();
    return a.exec();
}
