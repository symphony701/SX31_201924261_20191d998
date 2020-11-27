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
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLineEdit *lineID_2;
    QPushButton *ButtonPerfil_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *FormPrincipal)
    {
        if (FormPrincipal->objectName().isEmpty())
            FormPrincipal->setObjectName(QString::fromUtf8("FormPrincipal"));
        FormPrincipal->resize(1238, 892);
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
        lineEdit = new QLineEdit(FormPrincipal);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(920, 250, 261, 91));
        lineEdit_2 = new QLineEdit(FormPrincipal);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(920, 380, 261, 31));
        pushButton = new QPushButton(FormPrincipal);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(970, 440, 161, 41));
        label_2 = new QLabel(FormPrincipal);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(920, 230, 131, 16));
        label_3 = new QLabel(FormPrincipal);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(920, 350, 131, 16));

        retranslateUi(FormPrincipal);

        QMetaObject::connectSlotsByName(FormPrincipal);
    } // setupUi

    void retranslateUi(QWidget *FormPrincipal)
    {
        FormPrincipal->setWindowTitle(QCoreApplication::translate("FormPrincipal", "Form", nullptr));
        lineID->setText(QCoreApplication::translate("FormPrincipal", "User", nullptr));
        ButtonPerfil->setText(QCoreApplication::translate("FormPrincipal", "Search", nullptr));
        radioButton->setText(QCoreApplication::translate("FormPrincipal", "Fecha Descendente", nullptr));
        radioButton_2->setText(QCoreApplication::translate("FormPrincipal", "Fecha Ascendente", nullptr));
        radioButton_3->setText(QCoreApplication::translate("FormPrincipal", "M\303\241s populares", nullptr));
        lineID_2->setText(QString());
        ButtonPerfil_2->setText(QCoreApplication::translate("FormPrincipal", "Search", nullptr));
        label->setText(QCoreApplication::translate("FormPrincipal", "Buscar Publicaci\303\263n:", nullptr));
        pushButton->setText(QCoreApplication::translate("FormPrincipal", "Publicar", nullptr));
        label_2->setText(QCoreApplication::translate("FormPrincipal", "Publicacion:", nullptr));
        label_3->setText(QCoreApplication::translate("FormPrincipal", "#:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPrincipal: public Ui_FormPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPRINCIPAL_H
