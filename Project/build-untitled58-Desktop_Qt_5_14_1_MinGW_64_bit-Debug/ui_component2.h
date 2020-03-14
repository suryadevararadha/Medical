/********************************************************************************
** Form generated from reading UI file 'component2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENT2_H
#define UI_COMPONENT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Component2
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Component2)
    {
        if (Component2->objectName().isEmpty())
            Component2->setObjectName(QString::fromUtf8("Component2"));
        Component2->resize(423, 378);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Component2->setPalette(palette);
        centralwidget = new QWidget(Component2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 80, 47, 13));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 80, 181, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 130, 47, 13));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 130, 201, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 180, 47, 13));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 180, 201, 16));
        Component2->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Component2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Component2->setStatusBar(statusbar);

        retranslateUi(Component2);

        QMetaObject::connectSlotsByName(Component2);
    } // setupUi

    void retranslateUi(QMainWindow *Component2)
    {
        Component2->setWindowTitle(QCoreApplication::translate("Component2", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Component2", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("Component2", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Component2", "Phone", nullptr));
        label_4->setText(QCoreApplication::translate("Component2", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("Component2", "E-Mail", nullptr));
        label_6->setText(QCoreApplication::translate("Component2", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Component2: public Ui_Component2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENT2_H
