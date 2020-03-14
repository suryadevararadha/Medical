#include "component2.h"
#include "ui_component2.h"
#include<QDebug>
#include<QJsonObject>
Component2::Component2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Component2)
{
    ui->setupUi(this);
}

Component2::~Component2()
{
    delete ui;
}

void Component2::updateui(QJsonObject obj)
{
    ui->label_2->setText(obj["name"].toString());
    ui->label_4->setText(obj["phone"].toString());
    ui->label_6->setText(obj["email"].toString());
    qDebug()<<"Slot updateui called";
}
