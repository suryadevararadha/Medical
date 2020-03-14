#ifndef CLASS4_H
#define CLASS4_H
#include<component2.h>

#include <QWidget>

class Class4 : public QWidget
{
    Q_OBJECT

public:
    Class4(QWidget *parent = 0);
public:
   Component2 *com;
};

#endif // CLASS4_H
