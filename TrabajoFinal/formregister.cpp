#include "formregister.h"
#include "ui_formregister.h"

FormRegister::FormRegister(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormRegister)
{
    ui->setupUi(this);
}

FormRegister::~FormRegister()
{
    delete ui;
}
