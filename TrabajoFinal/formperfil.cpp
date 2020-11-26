#include "formperfil.h"
#include "ui_formperfil.h"
#include "logeador.h"
FormPerfil::FormPerfil(QWidget *parent, User *Persona,string persona) :
    QWidget(parent),
    ui(new Ui::FormPerfil)
{
    ui->setupUi(this);


/*
    if(Persona ==nullptr){
        login *log = new login();
        User *Persona = log->persona(persona);
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
    }else{
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

        QPushButton* asd = new QPushButton("Wtf");
       connect(asd,SIGNAL(clicked()),this,SLOT(close));
        layse->addWidget(asd);
         ui->scrollAreaWidgetContents_2->setLayout(layse);
         ui->scrollAreaWidgetContents_3->setLayout(layso);
         ui->lbl_followers->setText("Followes: "+QString::number(followers->getNroSeguidores()));


    }

*/


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
