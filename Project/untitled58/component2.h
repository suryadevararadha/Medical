#ifndef COMPONENT2_H
#define COMPONENT2_H

#include <QMainWindow>
#include<QJsonObject>

namespace Ui {
class Component2;
}

class Component2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Component2(QWidget *parent = nullptr);
    ~Component2();

public slots:
    void updateui(QJsonObject obj);

public:
    Ui::Component2 *ui;
};

#endif // COMPONENT2_H
