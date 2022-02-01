/********************************************************************************
** Form generated from reading UI file 'todohmi.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODOHMI_H
#define UI_TODOHMI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToDoHmi
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ToDoHmi)
    {
        if (ToDoHmi->objectName().isEmpty())
            ToDoHmi->setObjectName(QString::fromUtf8("ToDoHmi"));
        ToDoHmi->resize(800, 600);
        centralwidget = new QWidget(ToDoHmi);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 80, 89, 25));
        ToDoHmi->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ToDoHmi);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        ToDoHmi->setMenuBar(menubar);
        statusbar = new QStatusBar(ToDoHmi);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ToDoHmi->setStatusBar(statusbar);

        retranslateUi(ToDoHmi);

        QMetaObject::connectSlotsByName(ToDoHmi);
    } // setupUi

    void retranslateUi(QMainWindow *ToDoHmi)
    {
        ToDoHmi->setWindowTitle(QCoreApplication::translate("ToDoHmi", "ToDoHmi", nullptr));
        pushButton->setText(QCoreApplication::translate("ToDoHmi", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToDoHmi: public Ui_ToDoHmi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODOHMI_H
