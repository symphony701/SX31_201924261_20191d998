#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Publi.h"
#include <QDebug>
using namespace std;
class lector{
private:
    vector<Publicacion>*arrPub;
public:
    lector(){
        arrPub=new vector<Publicacion>;
        leer();
    }

    Publicacion getPublicacion(int n){
        return arrPub->at(n);
    }

    int getSize(){return arrPub->size();}
    void leer(){
        string idPub,idUser,likes;
        string content,fecha,content2;
        string aux;
         //string prueba="Probando";
        ifstream dataUser("publications.tsv");
          while(getline(dataUser,aux,'\t')){
              getline(dataUser,idPub,'\t');
              getline(dataUser,idUser,'\t');
              getline(dataUser,content,'\t');
              getline(dataUser,content2,'\t');
              getline(dataUser,fecha,'\t');
              getline(dataUser,likes);
             Publicacion uwu(atoi(idPub.c_str()),atoi(idUser.c_str()),content,atoi(likes.c_str()),fecha,content2);
              arrPub->push_back(uwu);

           }
        }
  };

