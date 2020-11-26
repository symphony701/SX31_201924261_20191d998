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
#include <QtWidgets/QFrame>
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
    QPushButton *login_2;
    QLineEdit *lineID_2;
    QFrame *line;
    QLineEdit *lineID_3;
    QLineEdit *lineID_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1012, 483);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineID = new QLineEdit(centralwidget);
        lineID->setObjectName(QString::fromUtf8("lineID"));
        lineID->setGeometry(QRect(110, 80, 341, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(18);
        lineID->setFont(font);
        lineID->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        lineID->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        login = new QPushButton(centralwidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(210, 340, 151, 71));
        QFont font1;
        font1.setPointSize(15);
        login->setFont(font1);
        login->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        login_2 = new QPushButton(centralwidget);
        login_2->setObjectName(QString::fromUtf8("login_2"));
        login_2->setGeometry(QRect(710, 340, 151, 71));
        login_2->setFont(font1);
        login_2->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        lineID_2 = new QLineEdit(centralwidget);
        lineID_2->setObjectName(QString::fromUtf8("lineID_2"));
        lineID_2->setGeometry(QRect(110, 200, 341, 61));
        lineID_2->setFont(font);
        lineID_2->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        lineID_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(510, -10, 20, 471));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        lineID_3 = new QLineEdit(centralwidget);
        lineID_3->setObjectName(QString::fromUtf8("lineID_3"));
        lineID_3->setGeometry(QRect(620, 80, 341, 61));
        lineID_3->setFont(font);
        lineID_3->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        lineID_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineID_4 = new QLineEdit(centralwidget);
        lineID_4->setObjectName(QString::fromUtf8("lineID_4"));
        lineID_4->setGeometry(QRect(620, 190, 341, 61));
        lineID_4->setFont(font);
        lineID_4->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        lineID_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1012, 20));
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
        login_2->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        lineID_2->setText(QCoreApplication::translate("MainWindow", "Mail", nullptr));
        lineID_3->setText(QCoreApplication::translate("MainWindow", "User", nullptr));
        lineID_4->setText(QCoreApplication::translate("MainWindow", "Mail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
