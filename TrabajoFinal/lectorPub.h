#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Publi.h"
#include <QDebug>
#include "Arbol.h"
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QWidget>
#include "busquedaBinariaUsuarios.h"
#include "User.h"
#include "logeador.h"

using namespace std;




class lector{
private:
    vector<Publicacion>*arrPub;
    Tree<Publicacion>*fechaAs;
    Tree<Publicacion>*fechaDes;
    Tree<Publicacion>*Likes;
    vector<Publicacion> * vectoFind;
    bs<User>*search;
    login *log;
    int id;

public:
    lector(){
        fechaAs = new Tree<Publicacion>();
        fechaDes = new Tree<Publicacion>();
        Likes = new Tree<Publicacion>();
        arrPub=new vector<Publicacion>;
        search = new bs<User>();
        leer();
        fechaAscendente();
        fechaDescendente();
        porLikes();
        fechaAs->wakarimasen();

        Likes->wakarimasen();
        fechaDes->wakarimasen();

    }
   lector(string Buscado){
        fechaAs = new Tree<Publicacion>();
        fechaDes = new Tree<Publicacion>();
        Likes = new Tree<Publicacion>();
        arrPub=new vector<Publicacion>;
        search = new bs<User>();
        log= new login();
        id=log->getIdPersona(Buscado);

        leer2();

        fechaAscendente();
        fechaDescendente();
        porLikes();
        fechaAs->wakarimasen();

        Likes->wakarimasen();
        fechaDes->wakarimasen();

    }

    //--------Insertadores------

    void fechaAscendente(){
        int leng=arrPub->size();
        for(int i=0;i<leng;++i){
            fechaAs->insertHojaFechaPos(arrPub->at(i));

        }


    }

    void fechaDescendente(){
        int leng=arrPub->size();
        for(int i=0;i<leng;++i){
            fechaDes->insertHojaFechaNeg(arrPub->at(i));

        }
    }

    void porLikes(){
        int leng=arrPub->size();
        for(int i=0;i<leng;++i){
            Likes->insertHojaLike(arrPub->at(i));

        }
    }

    //-------Retornadores de publicaciones----
    Publicacion getPublicacion(int n){
        return arrPub->at(n);
    }

    Publicacion getPubFechaAs(int i){

        return fechaAs->getPublicacion(i);
    }
    Publicacion getPubFechaDes(int i){
        return fechaDes->getPublicacion(i);
    }
    Publicacion getPubLikes(int i){
        return Likes->getPublicacion(i);
    }

    int getSize(){return arrPub->size();}

    //----Lector de archivo----
    void leer2(){
        string idPub,idUser,likes;
        string content,fecha,content2;
        string aux;

        ifstream dataUser("publications.tsv");
          while(getline(dataUser,aux,'\t')){
              getline(dataUser,idPub,'\t');
              getline(dataUser,idUser,'\t');
              getline(dataUser,content,'\t');
              getline(dataUser,content2,'\t');
              getline(dataUser,fecha,'\t');
              getline(dataUser,likes);

              string owo="";
              int le= fecha.size();
              for(int i=0;i<le;++i){
                  if(fecha[i]!='-'){
                      owo=owo+fecha[i];
                  }
              }

              //qDebug()<<QString::fromStdString(owo);

             if(atoi(idUser.c_str())==id){
                 Publicacion uwu(atoi(idPub.c_str()),atoi(idUser.c_str()),content,atoi(likes.c_str()),fecha,content2,atoi(owo.c_str()));
                  arrPub->push_back(uwu);
             }


           }
        }
    void leer(){
        string idPub,idUser,likes;
        string content,fecha,content2;
        string aux;

        ifstream dataUser("publications.tsv");
          while(getline(dataUser,aux,'\t')){
              getline(dataUser,idPub,'\t');
              getline(dataUser,idUser,'\t');
              getline(dataUser,content,'\t');
              getline(dataUser,content2,'\t');
              getline(dataUser,fecha,'\t');
              getline(dataUser,likes);

              string owo="";
              int le= fecha.size();
              for(int i=0;i<le;++i){
                  if(fecha[i]!='-'){
                      owo=owo+fecha[i];
                  }
              }

              //qDebug()<<QString::fromStdString(owo);
             Publicacion uwu(atoi(idPub.c_str()),atoi(idUser.c_str()),content,atoi(likes.c_str()),fecha,content2,atoi(owo.c_str()));
              arrPub->push_back(uwu);

           }
    }

    void findWord(QGridLayout * lay, string KeyWord){
        vectoFind = new vector<Publicacion>();
        string idPub,idUser,likes;
        string content,fecha,content2;
        string aux;
        ifstream dataUser("publications.tsv");



        while(getline(dataUser,aux,'\t')){
            getline(dataUser,idPub,'\t');
            getline(dataUser,idUser,'\t');
            getline(dataUser,content,'\t');
            getline(dataUser,content2,'\t');
            getline(dataUser,fecha,'\t');
            getline(dataUser,likes);

            string owo="";
            int le= fecha.size();
            for(int i=0;i<le;++i){
                if(fecha[i]!='-'){
                    owo=owo+fecha[i];
                }
            }

            if ((content.find(KeyWord) != std::string::npos)||(content2.find(KeyWord) != std::string::npos)) {
              Publicacion uwu(atoi(idPub.c_str()),atoi(idUser.c_str()),content,atoi(likes.c_str()),fecha,content2,atoi(owo.c_str()));
              vectoFind->push_back(uwu);
                 }
            }

            //-------------DIBUJADOR ESPECIAL----------

            int leng=vectoFind->size();
            QGroupBox *pub[leng];
            for (int i=0;i<leng ;++i ) {
                pub[i]=new QGroupBox();
                QVBoxLayout *vbox = new QVBoxLayout;

                QLabel *conten= new QLabel;
                QLabel *content2= new QLabel;
                QLabel *persona = new QLabel;



               persona->setText(QString::fromStdString(search->returnBs(vectoFind->at(i).getIdUser())->getNick())+": "+
                                QString::fromStdString(vectoFind->at(i).getFecha()));

               conten->setText(QString::fromStdString(vectoFind->at(i).getContent()));
                    qDebug()<<QString::fromStdString(vectoFind->at(i).getContent());
                content2->setText("#"+QString::fromStdString(vectoFind->at(i).getContent2()));
                vbox->addWidget(persona);
                vbox->addWidget(conten);
                vbox->addWidget(content2);
                QPushButton *BLike = new QPushButton(QString::number(vectoFind->at(i).getLikes()) +" Like");
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






            //-------------END-------------------


            }





  };

