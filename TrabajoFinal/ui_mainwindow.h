/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineID;
    QPushButton *login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(594, 333);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineID = new QLineEdit(centralwidget);
        lineID->setObjectName(QString::fromUtf8("lineID"));
        lineID->setGeometry(QRect(120, 100, 341, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(18);
        lineID->setFont(font);
        lineID->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        lineID->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        login = new QPushButton(centralwidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(200, 210, 151, 71));
        QFont font1;
        font1.setPointSize(15);
        login->setFont(font1);
        login->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 594, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineID->setText(QCoreApplication::translate("MainWindow", "User", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Log In!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
