#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formprincipal.h"
#include "error.h"
#include "register.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    log=new login();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{

    if(log->validadorLogin(ui->lineID->text().toStdString(),ui->lineID_2->text().toStdString())){

        FormPrincipal* principalSocial= new FormPrincipal(nullptr,log->getIdPersona(ui->lineID->text().toStdString()),ui->lineID->text().toStdString());

        principalSocial->showMaximized();
    }else{
        Error* formerror= new Error();
        formerror->show();

    }
}

void MainWindow::on_lineMail_cursorPositionChanged(int arg1, int arg2)
{

}

void MainWindow::on_login_2_clicked()
{
    sing= new reg();
    sing->Lector();
    sing->Escritor(ui->lineID_3->text().toStdString(),ui->lineID_4->text().toStdString());
    log=new login();
    ui->lineID_3->setText("User");
    ui->lineID_4->setText("Mail");
}
