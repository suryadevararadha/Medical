#include "integration.h"

#include <QApplication>
#include<class1.h>
#include<class4.h>
#include<QWidget>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QListView>
#include<QJsonObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // integration w;
    //w.show();
    QWidget w;
    QHBoxLayout h;
    Class1 c1;
    Class4 c4;
    h.addWidget(c1.comp);
    h.addWidget(c4.com);
    w.setLayout(&h);
    QObject::connect(c1.comp,SIGNAL(listclicked(QJsonObject)),c4.com,SLOT(updateui(QJsonObject)));
    w.setGeometry(0,0,800,400);
    w.show();

    return a.exec();
}
