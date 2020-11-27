#include "formperfil.h"
#include "ui_formperfil.h"
#include "logeador.h"
#include "busquedaBinariaUsuarios.h"
#include "Graficador.h"
#include <QGroupBox>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include "User.h"
#include "register.h"

FormPerfil::FormPerfil(QWidget *parent, User *Persona,string persona,int IDUSUARIO) :
    QWidget(parent),
    ui(new Ui::FormPerfil)
{
    nickActual=persona;
    this->IDUSER=IDUSUARIO;
    ui->setupUi(this);
    this->Personita=Persona;
    grafica = new Graphics(Personita->getNick());

    lay = new QGridLayout(this);
    grafica->dibujarInicio(lay);



    ui->scrollAreaWidgetContents->setLayout(lay);



    followers= new Follow(Personita,IDUSER);

    ui->label->setText(QString::fromStdString(Personita->getNick()));
    ui->lbl_mail->setText("Email: "+(QString::fromStdString(Personita->getMail())));
    ui->label->setStyleSheet("font-size:24pt");

    ui->lbl_followers->setText("Followers: ");

    FormPerfil::Rinku();


}



FormPerfil::~FormPerfil()
{
    delete ui;
}

void FormPerfil::Rinku(){


    QGridLayout *layse= new QGridLayout();
    QGridLayout *layso= new QGridLayout();

    QPushButton * followSe[followers->getNroSeguidores()];
    QPushButton * followSo[followers->getNroSeguidos()];

    followers->dibujarSeguidores(layse,this,followSe);
    followers->dibujarSeguidos(layso,this,followSo);

     ui->scrollAreaWidgetContents_2->setLayout(layse);
     ui->scrollAreaWidgetContents_3->setLayout(layso);
     ui->lbl_followers->setText("Followes: "+QString::number(followers->getNroSeguidores()));

}

void FormPerfil::on_radioButton_clicked()
{
    QWidget *variable = ui->scrollArea->widget();
    if(variable){variable->deleteLater();}
    QGridLayout * lay = new QGridLayout();
    grafica->dibujarLikes(lay);
    QWidget *areaVisible= new QWidget();
    areaVisible->setLayout(lay);
    ui->scrollArea->setWidget(areaVisible);
}

void FormPerfil::on_radioButton_2_clicked()
{
    QWidget *variable = ui->scrollArea->widget();
    if(variable){variable->deleteLater();}
    QGridLayout * lay = new QGridLayout();
    grafica->dibujarFechaPos(lay);
    QWidget *areaVisible= new QWidget();
    areaVisible->setLayout(lay);
    ui->scrollArea->setWidget(areaVisible);
}

void FormPerfil::on_radioButton_3_clicked()
{
    QWidget *variable = ui->scrollArea->widget();
    if(variable){variable->deleteLater();}
    QGridLayout * lay = new QGridLayout();
    grafica->dibujarFechaNeg(lay);
    QWidget *areaVisible= new QWidget();
    areaVisible->setLayout(lay);
    ui->scrollArea->setWidget(areaVisible);
}

void FormPerfil::on_pushButton_clicked()
{
    if(followers->esSeguidor()==true){
        registroPubli= new reg();
        registroPubli->lectorPublicaciones();
        registroPubli->escritorPublicaciones(to_string(Personita->getNro()),ui->lineEdit->text().toStdString(),nickActual);
        ui->lineEdit->setText("");
       // ui->lineEdit_2->setText("");
        grafica = new Graphics(Personita->getNick());
        FormPerfil::on_radioButton_3_clicked();
    }
}

void FormPerfil::on_pushButton_2_clicked()
{
    if(followers->esSeguidor()==false){
        followers->leer2();
        followers->escribir();
    }
}
