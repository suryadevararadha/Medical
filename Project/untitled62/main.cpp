#include "mainwindow.h"
#include<class5.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Class5 top;
    top.comp->show();
    return a.exec();
}
