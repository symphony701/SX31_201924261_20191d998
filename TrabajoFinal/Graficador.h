#pragma once
#include <QWidget>
#include "lectorPub.h"
#include "busquedaBinariaUsuarios.h"
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QObject>



class Graphics{
    lector *lec;
    bs<User>*search;
public:
    Graphics(){
        lec = new lector();
        search = new bs<User>();
    }
    Graphics(string owo){
        lec = new lector(owo);
        search = new bs<User>();
    }

    void dibujarFechaPos(QGridLayout * lay){
       // QGridLayout * lay = new QGridLayout(this);
        QGroupBox *pub[lec->getSize()];
        for (int i=0;i<lec->getSize() ;++i ) {
            pub[i]=new QGroupBox();
            QVBoxLayout *vbox = new QVBoxLayout;

            QLabel *conten= new QLabel;
            QLabel *content2= new QLabel;
            QLabel *persona = new QLabel;



           persona->setText(QString::fromStdString(search->returnBs(lec->getPubFechaAs(i).getIdUser())->getNick())+": "+
                            QString::fromStdString(lec->getPubFechaAs(i).getFecha()));

           conten->setText(QString::fromStdString(lec->getPubFechaAs(i).getContent()));
                //qDebug()<<QString::fromStdString(lec->getPubFechaAs(i).getContent());
            content2->setText("#"+QString::fromStdString(lec->getPubFechaAs(i).getContent2()));
            vbox->addWidget(persona);
            vbox->addWidget(conten);
            vbox->addWidget(content2);
            QPushButton *BLike = new QPushButton(QString::number(lec->getPubFechaAs(i).getLikes()) +" Like");
            QObject::connect(BLike, &QPushButton::clicked,[=](){

               BLike->setText(QString::number(lec->getPubFechaAs(i).getLikes()+1) +" Like");
            });
            QPushButton *BComment = new QPushButton("Comment");

            vbox->addWidget(BLike);
            vbox->addWidget(BComment);

            pub[i]->setLayout(vbox);


            QFrame *line= new QFrame();
            line->setFrameShape(QFrame::HLine);
            line->setFrameShadow(QFrame::Sunken);
            line->setStyleSheet("background:black");
            lay->addWidget(pub[i]);

            lay->addWidget(line);

        }



    }

    void dibujarInicio(QGridLayout * lay){
        QGroupBox *pub[lec->getSize()];
        for (int i=0;i<lec->getSize() ;++i ) {
            pub[i]=new QGroupBox();
            QVBoxLayout *vbox = new QVBoxLayout;

            QLabel *conten= new QLabel;
            QLabel *content2= new QLabel;
            QLabel *persona = new QLabel;

            persona->setText(QString::fromStdString(search->returnBs(i+1)->getNick())+": ");

            conten->setText(QString::fromStdString(lec->getPublicacion(i).getContent()));
            content2->setText("#"+QString::fromStdString(lec->getPublicacion(i).getContent2()));
            vbox->addWidget(persona);
            vbox->addWidget(conten);
            vbox->addWidget(content2);
            QPushButton *BLike = new QPushButton(QString::number(lec->getPublicacion(i).getLikes()) +" Like");
            QObject::connect(BLike, &QPushButton::clicked,[=](){

               BLike->setText(QString::number(lec->getPubFechaAs(i).getLikes()+1) +" Like");
            });
            QPushButton *BComment = new QPushButton("Comment");

            vbox->addWidget(BLike);
            vbox->addWidget(BComment);

            pub[i]->setLayout(vbox);


            QFrame *line= new QFrame();
            line->setFrameShape(QFrame::HLine);
            line->setFrameShadow(QFrame::Sunken);
            line->setStyleSheet("background:black");
            lay->addWidget(pub[i]);

            lay->addWidget(line);

        }
    }
    void dibujarFechaNeg(QGridLayout * lay){
        QGroupBox *pub[lec->getSize()];
        for (int i=0;i<lec->getSize() ;++i ) {
            pub[i]=new QGroupBox();
            QVBoxLayout *vbox = new QVBoxLayout;

            QLabel *conten= new QLabel;
            QLabel *content2= new QLabel;
            QLabel *persona = new QLabel;



           persona->setText(QString::fromStdString(search->returnBs(lec->getPubFechaDes(i).getIdUser())->getNick())+": "+
                            QString::fromStdString(lec->getPubFechaDes(i).getFecha()));

           conten->setText(QString::fromStdString(lec->getPubFechaDes(i).getContent()));
                qDebug()<<QString::fromStdString(lec->getPubFechaDes(i).getContent());
            content2->setText("#"+QString::fromStdString(lec->getPubFechaDes(i).getContent2()));
            vbox->addWidget(persona);
            vbox->addWidget(conten);
            vbox->addWidget(content2);
            QPushButton *BLike = new QPushButton(QString::number(lec->getPubFechaDes(i).getLikes()) +" Like");
            QObject::connect(BLike, &QPushButton::clicked,[=](){

               BLike->setText(QString::number(lec->getPubFechaAs(i).getLikes()+1) +" Like");
            });
            QPushButton *BComment = new QPushButton("Comment");

            vbox->addWidget(BLike);
            vbox->addWidget(BComment);

            pub[i]->setLayout(vbox);


            QFrame *line= new QFrame();
            line->setFrameShape(QFrame::HLine);
            line->setFrameShadow(QFrame::Sunken);
            line->setStyleSheet("background:black");
            lay->addWidget(pub[i]);

            lay->addWidget(line);

        }

    }
    void dibujarLikes(QGridLayout * lay){
        QGroupBox *pub[lec->getSize()];
        for (int i=0;i<lec->getSize() ;++i ) {
            pub[i]=new QGroupBox();
            QVBoxLayout *vbox = new QVBoxLayout;

            QLabel *conten= new QLabel;
            QLabel *content2= new QLabel;
            QLabel *persona = new QLabel;



           persona->setText(QString::fromStdString(search->returnBs(lec->getPubLikes(i).getIdUser())->getNick())+": "+
                            QString::fromStdString(lec->getPubLikes(i).getFecha()));

           conten->setText(QString::fromStdString(lec->getPubLikes(i).getContent()));
                //qDebug()<<QString::fromStdString(lec->getPubLikes(i).getContent());
            content2->setText("#"+QString::fromStdString(lec->getPubLikes(i).getContent2()));
            vbox->addWidget(persona);
            vbox->addWidget(conten);
            vbox->addWidget(content2);
            QPushButton *BLike = new QPushButton(QString::number(lec->getPubLikes(i).getLikes()) +" Like");
            QObject::connect(BLike, &QPushButton::clicked,[=](){

               BLike->setText(QString::number(lec->getPubFechaAs(i).getLikes()+1) +" Like");
            });
            QPushButton *BComment = new QPushButton("Comment");

            vbox->addWidget(BLike);
            vbox->addWidget(BComment);

            pub[i]->setLayout(vbox);


            QFrame *line= new QFrame();
            line->setFrameShape(QFrame::HLine);
            line->setFrameShadow(QFrame::Sunken);
            line->setStyleSheet("background:black");
            lay->addWidget(pub[i]);

            lay->addWidget(line);

        }

    }



    void dibujarKeyWord(QGridLayout * lay,string KeyWord){
        lec->findWord(lay,KeyWord);
    }






};
