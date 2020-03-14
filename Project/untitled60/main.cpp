#include "mainwindow.h"
#include<class4.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Class4 component;
    component.com->show();
    return a.exec();
}
