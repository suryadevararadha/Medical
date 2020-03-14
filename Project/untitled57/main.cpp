#include "mainwindow.h"
#include<class1.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
   // w.show();
    Class1 c;
    c.comp->show();
    return a.exec();
}
