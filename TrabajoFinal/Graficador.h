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



class Graphics{
    lector *lec;
    bs<User>*search;
public:
    Graphics(){
        lec = new lector();
        search = new bs<User>();
    }

    void dibujarInicio(QGridLayout * lay){
       // QGridLayout * lay = new QGridLayout(this);
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



};
