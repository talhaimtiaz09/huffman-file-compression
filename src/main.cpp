#include "qthuffman.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qthuffman w;
    w.show();
    return a.exec();
}
