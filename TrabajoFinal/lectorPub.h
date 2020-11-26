#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Publi.h"
#include <QDebug>
#include "Arbol.h"
using namespace std;




class lector{
private:
    vector<Publicacion>*arrPub;
    Tree<Publicacion>*fechaAs;
    Tree<Publicacion>*fechaDes;
    Tree<Publicacion>*Likes;

public:
    lector(){
        fechaAs = new Tree<Publicacion>();
        fechaDes = new Tree<Publicacion>();
        Likes = new Tree<Publicacion>();
        arrPub=new vector<Publicacion>;
        leer();
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
  };

