/********************************************************************************
** Form generated from reading UI file 'error.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERROR_H
#define UI_ERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Error
{
public:
    QLabel *label;

    void setupUi(QWidget *Error)
    {
        if (Error->objectName().isEmpty())
            Error->setObjectName(QString::fromUtf8("Error"));
        Error->resize(295, 203);
        label = new QLabel(Error);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 90, 201, 20));

        retranslateUi(Error);

        QMetaObject::connectSlotsByName(Error);
    } // setupUi

    void retranslateUi(QWidget *Error)
    {
        Error->setWindowTitle(QCoreApplication::translate("Error", "Form", nullptr));
        label->setText(QCoreApplication::translate("Error", "ERROR USUARIO NO ENCONTRADO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Error: public Ui_Error {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERROR_H
