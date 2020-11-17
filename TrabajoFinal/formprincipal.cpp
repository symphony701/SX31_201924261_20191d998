#include "formprincipal.h"
#include "ui_formprincipal.h"
#include "formperfil.h"
#include <QGridLayout>
FormPrincipal::FormPrincipal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormPrincipal)
{
    ui->setupUi(this);
    QGridLayout * lay = new QGridLayout(this);






}

FormPrincipal::~FormPrincipal()
{
    delete ui;
}

void FormPrincipal::on_ButtonPerfil_clicked()
{
    FormPerfil *perfil=new FormPerfil(nullptr,ui->lineID->text());
    perfil->show();
}
