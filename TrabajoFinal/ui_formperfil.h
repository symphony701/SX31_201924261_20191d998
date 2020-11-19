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

    void setupUi(QWidget *FormPerfil)
    {
        if (FormPerfil->objectName().isEmpty())
            FormPerfil->setObjectName(QString::fromUtf8("FormPerfil"));
        FormPerfil->resize(911, 840);
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
        scrollArea->setGeometry(QRect(10, 220, 521, 591));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 519, 589));
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
    } // retranslateUi

};

namespace Ui {
    class FormPerfil: public Ui_FormPerfil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPERFIL_H
