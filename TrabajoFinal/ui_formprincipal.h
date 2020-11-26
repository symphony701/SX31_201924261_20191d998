/********************************************************************************
** Form generated from reading UI file 'formprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPRINCIPAL_H
#define UI_FORMPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPrincipal
{
public:
    QLineEdit *lineID;
    QPushButton *ButtonPerfil;
    QScrollArea *scrollPubs;
    QWidget *scrollAreaWidgetContents_3;
    QGroupBox *groupBox_3;
    QLabel *label_12;
    QPushButton *pushButton;
    QLabel *label_14;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_15;
    QLabel *label_16;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLineEdit *lineID_2;
    QPushButton *ButtonPerfil_2;
    QLabel *label;

    void setupUi(QWidget *FormPrincipal)
    {
        if (FormPrincipal->objectName().isEmpty())
            FormPrincipal->setObjectName(QString::fromUtf8("FormPrincipal"));
        FormPrincipal->resize(1155, 700);
        lineID = new QLineEdit(FormPrincipal);
        lineID->setObjectName(QString::fromUtf8("lineID"));
        lineID->setGeometry(QRect(210, 30, 281, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(18);
        lineID->setFont(font);
        lineID->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        lineID->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ButtonPerfil = new QPushButton(FormPrincipal);
        ButtonPerfil->setObjectName(QString::fromUtf8("ButtonPerfil"));
        ButtonPerfil->setGeometry(QRect(520, 30, 91, 41));
        scrollPubs = new QScrollArea(FormPrincipal);
        scrollPubs->setObjectName(QString::fromUtf8("scrollPubs"));
        scrollPubs->setGeometry(QRect(40, 220, 831, 641));
        scrollPubs->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 829, 639));
        scrollPubs->setWidget(scrollAreaWidgetContents_3);
        groupBox_3 = new QGroupBox(FormPrincipal);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(880, 360, 591, 121));
        groupBox_3->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 10, 531, 61));
        label_12->setStyleSheet(QString::fromUtf8("color:black;"));
        label_12->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 90, 80, 21));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;"));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 90, 21, 21));
        label_14->setStyleSheet(QString::fromUtf8("color:black;\n"
"border:none;"));
        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 90, 80, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;"));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(470, 90, 80, 21));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;"));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(220, 90, 21, 21));
        label_15->setStyleSheet(QString::fromUtf8("color:black;\n"
"border:none;"));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(440, 90, 21, 21));
        label_16->setStyleSheet(QString::fromUtf8("color:black;\n"
"border:none;"));
        radioButton = new QRadioButton(FormPrincipal);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(30, 190, 121, 19));
        radioButton_2 = new QRadioButton(FormPrincipal);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(30, 160, 121, 19));
        radioButton_3 = new QRadioButton(FormPrincipal);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(30, 130, 101, 19));
        lineID_2 = new QLineEdit(FormPrincipal);
        lineID_2->setObjectName(QString::fromUtf8("lineID_2"));
        lineID_2->setGeometry(QRect(250, 150, 281, 41));
        lineID_2->setFont(font);
        lineID_2->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        lineID_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ButtonPerfil_2 = new QPushButton(FormPrincipal);
        ButtonPerfil_2->setObjectName(QString::fromUtf8("ButtonPerfil_2"));
        ButtonPerfil_2->setGeometry(QRect(540, 150, 91, 41));
        label = new QLabel(FormPrincipal);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 130, 131, 16));

        retranslateUi(FormPrincipal);

        QMetaObject::connectSlotsByName(FormPrincipal);
    } // setupUi

    void retranslateUi(QWidget *FormPrincipal)
    {
        FormPrincipal->setWindowTitle(QCoreApplication::translate("FormPrincipal", "Form", nullptr));
        lineID->setText(QCoreApplication::translate("FormPrincipal", "User", nullptr));
        ButtonPerfil->setText(QCoreApplication::translate("FormPrincipal", "Search", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("FormPrincipal", "GroupBox", nullptr));
        label_12->setText(QCoreApplication::translate("FormPrincipal", "React Native or Flutter? HELP!", nullptr));
        pushButton->setText(QCoreApplication::translate("FormPrincipal", "I LOVE IT!", nullptr));
        label_14->setText(QCoreApplication::translate("FormPrincipal", "25", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormPrincipal", "COMMENT", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormPrincipal", "SHARE", nullptr));
        label_15->setText(QCoreApplication::translate("FormPrincipal", "15", nullptr));
        label_16->setText(QCoreApplication::translate("FormPrincipal", "3", nullptr));
        radioButton->setText(QCoreApplication::translate("FormPrincipal", "Fecha Descendente", nullptr));
        radioButton_2->setText(QCoreApplication::translate("FormPrincipal", "Fecha Ascendente", nullptr));
        radioButton_3->setText(QCoreApplication::translate("FormPrincipal", "M\303\241s populares", nullptr));
        lineID_2->setText(QCoreApplication::translate("FormPrincipal", "User", nullptr));
        ButtonPerfil_2->setText(QCoreApplication::translate("FormPrincipal", "Search", nullptr));
        label->setText(QCoreApplication::translate("FormPrincipal", "Buscar Publicaci\303\263n:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPrincipal: public Ui_FormPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPRINCIPAL_H
