/********************************************************************************
** Form generated from reading UI file 'formperfil.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPERFIL_H
#define UI_FORMPERFIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPerfil
{
public:
    QLabel *label;
    QLabel *lbl_followers;
    QLabel *lbl_mail;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *label_3;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *FormPerfil)
    {
        if (FormPerfil->objectName().isEmpty())
            FormPerfil->setObjectName(QString::fromUtf8("FormPerfil"));
        FormPerfil->resize(913, 875);
        label = new QLabel(FormPerfil);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 20, 201, 71));
        label->setAlignment(Qt::AlignCenter);
        lbl_followers = new QLabel(FormPerfil);
        lbl_followers->setObjectName(QString::fromUtf8("lbl_followers"));
        lbl_followers->setGeometry(QRect(100, 150, 161, 21));
        lbl_mail = new QLabel(FormPerfil);
        lbl_mail->setObjectName(QString::fromUtf8("lbl_mail"));
        lbl_mail->setGeometry(QRect(650, 160, 171, 21));
        scrollArea = new QScrollArea(FormPerfil);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 310, 521, 541));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 519, 539));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_2 = new QLabel(FormPerfil);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(570, 210, 121, 31));
        scrollArea_2 = new QScrollArea(FormPerfil);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(590, 250, 271, 211));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 269, 209));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        label_3 = new QLabel(FormPerfil);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(580, 490, 121, 31));
        scrollArea_3 = new QScrollArea(FormPerfil);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(600, 550, 271, 211));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 269, 209));
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        radioButton = new QRadioButton(FormPerfil);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(30, 190, 84, 19));
        radioButton_2 = new QRadioButton(FormPerfil);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(30, 220, 121, 19));
        radioButton_3 = new QRadioButton(FormPerfil);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(30, 250, 121, 19));
        lineEdit = new QLineEdit(FormPerfil);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 210, 391, 41));
        lineEdit->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(FormPerfil);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 260, 131, 31));
        pushButton_2 = new QPushButton(FormPerfil);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(680, 100, 80, 21));

        retranslateUi(FormPerfil);

        QMetaObject::connectSlotsByName(FormPerfil);
    } // setupUi

    void retranslateUi(QWidget *FormPerfil)
    {
        FormPerfil->setWindowTitle(QCoreApplication::translate("FormPerfil", "Form", nullptr));
        label->setText(QCoreApplication::translate("FormPerfil", "<html><head/><body><p><span style=\" font-size:24pt;\">jhjgj</span></p></body></html>", nullptr));
        lbl_followers->setText(QCoreApplication::translate("FormPerfil", "TextLabel", nullptr));
        lbl_mail->setText(QCoreApplication::translate("FormPerfil", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("FormPerfil", "Seguidores :", nullptr));
        label_3->setText(QCoreApplication::translate("FormPerfil", "Seguidos :", nullptr));
        radioButton->setText(QCoreApplication::translate("FormPerfil", "M\303\241s P\303\263pular", nullptr));
        radioButton_2->setText(QCoreApplication::translate("FormPerfil", "Fecha Ascendente", nullptr));
        radioButton_3->setText(QCoreApplication::translate("FormPerfil", "Fecha Descendente", nullptr));
        pushButton->setText(QCoreApplication::translate("FormPerfil", "Publicar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormPerfil", "Seguir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPerfil: public Ui_FormPerfil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPERFIL_H
