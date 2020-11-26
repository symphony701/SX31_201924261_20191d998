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

    QGridLayout * lay = new QGridLayout(this);
    grafica->dibujarFechaPos(lay);

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
