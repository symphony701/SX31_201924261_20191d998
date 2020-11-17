#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Publi.h"
using namespace std;
class lector{
private:
    vector<Publicacion>*arrPub;
public:
    lector(){
        arrPub=new vector<Publicacion>;

    }

    void leer(){
        string idPub,idUser,likes;
        string content,fecha,content2;
        string aux;
         //string prueba="Probando";
        ifstream dataUser("publications.txt");
          while(getline(dataUser,aux,',')){
              getline(dataUser,idPub,',');
              getline(dataUser,idUser,',');
              getline(dataUser,content,':');
              getline(dataUser,aux,',');
              getline(dataUser,content2,',');
              getline(dataUser,fecha,',');
              getline(dataUser,likes);

              content.erase(content.length()-1);
              content.erase(content.length()-1);
              content.erase(content.length()-1);
              content.erase(content.length()-1);
              content.erase(content.length()-1);
             Publicacion uwu(atoi(idPub.c_str()),atoi(idUser.c_str()),content,atoi(likes.c_str()),fecha,content2);
              arrPub->push_back(uwu);
           }
        }
  };

