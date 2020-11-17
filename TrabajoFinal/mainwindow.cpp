#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formprincipal.h"
#include "error.h"

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
    if(log->validadorUsuario(ui->lineID->text().toStdString())){
        FormPrincipal* principalSocial= new FormPrincipal(nullptr);
        principalSocial->showMaximized();
    }else{
        Error* formerror= new Error();
        formerror->show();

    }
}
