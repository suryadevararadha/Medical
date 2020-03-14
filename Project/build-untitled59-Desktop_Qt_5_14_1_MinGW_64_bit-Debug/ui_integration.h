/********************************************************************************
** Form generated from reading UI file 'integration.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTEGRATION_H
#define UI_INTEGRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_integration
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *integration)
    {
        if (integration->objectName().isEmpty())
            integration->setObjectName(QString::fromUtf8("integration"));
        integration->resize(800, 600);
        centralwidget = new QWidget(integration);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        integration->setCentralWidget(centralwidget);
        menubar = new QMenuBar(integration);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        integration->setMenuBar(menubar);
        statusbar = new QStatusBar(integration);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        integration->setStatusBar(statusbar);

        retranslateUi(integration);

        QMetaObject::connectSlotsByName(integration);
    } // setupUi

    void retranslateUi(QMainWindow *integration)
    {
        integration->setWindowTitle(QCoreApplication::translate("integration", "integration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class integration: public Ui_integration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTEGRATION_H
