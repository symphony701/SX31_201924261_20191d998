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
FormPrincipal::FormPrincipal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormPrincipal)
{
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
        FormPerfil *perfil=new FormPerfil(nullptr,person);
        perfil->show();
    }else{
        Error* formerror= new Error();
        formerror->show();
    }





}

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
