#include "formperfil.h"
#include "ui_formperfil.h"
#include "logeador.h"
FormPerfil::FormPerfil(QWidget *parent,QString Persona) :
    QWidget(parent),
    ui(new Ui::FormPerfil)
{
    ui->setupUi(this);
    log=new login();
    perfil = log->persona(Persona.toStdString());
    ui->label->setText(QString::fromStdString(perfil->getNick()));
    ui->lbl_mail->setText("Email: "+(QString::fromStdString(perfil->getMail())));
    ui->label->setStyleSheet("font-size:24pt");
    //font-size:24pt
    ui->lbl_followers->setText("Followers: ");


}

FormPerfil::~FormPerfil()
{
    delete ui;
}
