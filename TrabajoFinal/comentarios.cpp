#include "comentarios.h"
#include "ui_comentarios.h"
#include "lectorComentarios.h"

Comentarios::Comentarios(QWidget *parent,int IdPub) :
    QWidget(parent),
    ui(new Ui::Comentarios)
{
    aidi=IdPub;
    ui->setupUi(this);
    lec= new lectorCom(IdPub);
    ui->label->setText(lec->devolverComentarios());

}

Comentarios::~Comentarios()
{
    delete ui;
}

void Comentarios::on_pushButton_clicked()
{
    ui->label->setText("");
    lec->leer2();
    lec->escritor(ui->lineEdit->text().toStdString(),to_string(aidi));
    lec->leer(aidi);
    //ui->label->setText("");
    ui->label->setText(lec->devolverComentarios());
}
