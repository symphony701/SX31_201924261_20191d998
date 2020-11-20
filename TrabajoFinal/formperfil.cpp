#include "formperfil.h"
#include "ui_formperfil.h"
#include "logeador.h"
FormPerfil::FormPerfil(QWidget *parent, User *Persona) :
    QWidget(parent),
    ui(new Ui::FormPerfil)
{
    ui->setupUi(this);

    followers= new Follow(Persona);

    ui->label->setText(QString::fromStdString(Persona->getNick()));
    ui->lbl_mail->setText("Email: "+(QString::fromStdString(Persona->getMail())));
    ui->label->setStyleSheet("font-size:24pt");

    ui->lbl_followers->setText("Followers: ");

    QGridLayout *layse= new QGridLayout();
    QGridLayout *layso= new QGridLayout();

    followers->dibujarSeguidores(layse);
    followers->dibujarSeguidos(layso);

    ui->scrollAreaWidgetContents_2->setLayout(layse);
    ui->scrollAreaWidgetContents_3->setLayout(layso);


}

FormPerfil::~FormPerfil()
{
    delete ui;
}
