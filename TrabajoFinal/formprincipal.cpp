#include "formprincipal.h"
#include "ui_formprincipal.h"
#include "formperfil.h"
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include "User.h"
#include "busquedaBinariaUsuarios.h"
#include "Graficador.h"
#include "logeador.h"
#include "error.h"
#include "register.h"
FormPrincipal::FormPrincipal(QWidget *parent,int IDUSER,string nickActual) :
    QWidget(parent),
    ui(new Ui::FormPrincipal)
{
    this->IDUSER= IDUSER;
    this->nickActual=nickActual;
    ui->setupUi(this);
    grafica = new Graphics();

    lay = new QGridLayout(this);
    grafica->dibujarInicio(lay);

    ui->scrollAreaWidgetContents_3->setLayout(lay);



}

FormPrincipal::~FormPrincipal()
{
    delete ui;
}

void FormPrincipal::on_ButtonPerfil_clicked()
{
    login *log = new login();
    if(log->validadorUsuario(ui->lineID->text().toStdString())){
        User *person = log->persona(ui->lineID->text().toStdString());
        FormPerfil *perfil=new FormPerfil(nullptr,person,nickActual,IDUSER);
        perfil->show();
    }else{
        Error* formerror= new Error();
        formerror->show();
    }





}

//--------radio buttons-----

void FormPrincipal::on_radioButton_3_clicked()
{




        QWidget *variable = ui->scrollPubs->widget();
        if(variable){variable->deleteLater();}
        QGridLayout * lay = new QGridLayout();
        grafica->dibujarLikes(lay);
        QWidget *areaVisible= new QWidget();
        areaVisible->setLayout(lay);
        ui->scrollPubs->setWidget(areaVisible);

}

void FormPrincipal::on_radioButton_2_clicked()
{
        QWidget *variable = ui->scrollPubs->widget();
        if(variable){variable->deleteLater();}
        QGridLayout * lay = new QGridLayout();
        grafica->dibujarFechaPos(lay);
        QWidget *areaVisible= new QWidget();
        areaVisible->setLayout(lay);
        ui->scrollPubs->setWidget(areaVisible);
}

void FormPrincipal::on_radioButton_clicked()
{
        QWidget *variable = ui->scrollPubs->widget();
        if(variable){variable->deleteLater();}
        QGridLayout * lay = new QGridLayout();
        grafica->dibujarFechaNeg(lay);
        QWidget *areaVisible= new QWidget();
        areaVisible->setLayout(lay);
        ui->scrollPubs->setWidget(areaVisible);
}

//----Buscar por palabra----

void FormPrincipal::on_ButtonPerfil_2_clicked()
{
    QWidget *variable = ui->scrollPubs->widget();
    if(variable){variable->deleteLater();}
    QGridLayout * lay = new QGridLayout();
    grafica->dibujarKeyWord(lay,ui->lineID_2->text().toStdString());
    QWidget *areaVisible= new QWidget();
    areaVisible->setLayout(lay);
    ui->scrollPubs->setWidget(areaVisible);
}


void FormPrincipal::on_pushButton_clicked()
{
    registroPubli= new reg();
    registroPubli->lectorPublicaciones();
    registroPubli->escritorPublicaciones(to_string(IDUSER),ui->lineEdit->text().toStdString(),ui->lineEdit_2->text().toStdString());
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    grafica = new Graphics();
    FormPrincipal::on_radioButton_clicked();


}
