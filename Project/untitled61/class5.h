#ifndef CLASS5_H
#define CLASS5_H
#include<top.h>
#include <QWidget>

class Class5 : public QWidget
{
    Q_OBJECT

public:
    Class5(QWidget *parent = 0);
public:
    Top *comp;
};

#endif // CLASS5_H
