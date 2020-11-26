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
FormPerfil::FormPerfil(QWidget *parent, User *Persona,string persona) :
    QWidget(parent),
    ui(new Ui::FormPerfil)
{
    ui->setupUi(this);

    grafica = new Graphics(Persona->getNick());

    lay = new QGridLayout(this);
    grafica->dibujarInicio(lay);

    //ui->scrollAreaWidgetContents_3->setLayout(lay);
    ui->scrollAreaWidgetContents->setLayout(lay);



    followers= new Follow(Persona);

    ui->label->setText(QString::fromStdString(Persona->getNick()));
    ui->lbl_mail->setText("Email: "+(QString::fromStdString(Persona->getMail())));
    ui->label->setStyleSheet("font-size:24pt");

    ui->lbl_followers->setText("Followers: ");

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



FormPerfil::~FormPerfil()
{
    delete ui;
}

void FormPerfil::Rinku(){
 qDebug()<<"funciono owo";
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
