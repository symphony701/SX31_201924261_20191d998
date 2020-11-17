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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPerfil
{
public:
    QLabel *label;

    void setupUi(QWidget *FormPerfil)
    {
        if (FormPerfil->objectName().isEmpty())
            FormPerfil->setObjectName(QString::fromUtf8("FormPerfil"));
        FormPerfil->resize(782, 647);
        label = new QLabel(FormPerfil);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 20, 201, 71));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(FormPerfil);

        QMetaObject::connectSlotsByName(FormPerfil);
    } // setupUi

    void retranslateUi(QWidget *FormPerfil)
    {
        FormPerfil->setWindowTitle(QCoreApplication::translate("FormPerfil", "Form", nullptr));
        label->setText(QCoreApplication::translate("FormPerfil", "<html><head/><body><p><span style=\" font-size:24pt;\">jhjgj</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPerfil: public Ui_FormPerfil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPERFIL_H
