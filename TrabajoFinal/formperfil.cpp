#include "formperfil.h"
#include "ui_formperfil.h"
#include "logeador.h"
FormPerfil::FormPerfil(QWidget *parent, User *Persona) :
    QWidget(parent),
    ui(new Ui::FormPerfil)
{
    ui->setupUi(this);

    ui->label->setText(QString::fromStdString(Persona->getNick()));
    ui->lbl_mail->setText("Email: "+(QString::fromStdString(Persona->getMail())));
    ui->label->setStyleSheet("font-size:24pt");

    ui->lbl_followers->setText("Followers: ");


}

FormPerfil::~FormPerfil()
{
    delete ui;
}
