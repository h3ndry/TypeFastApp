#include "typefast.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TypeFast w;
    w.show();

    return a.exec();
}
