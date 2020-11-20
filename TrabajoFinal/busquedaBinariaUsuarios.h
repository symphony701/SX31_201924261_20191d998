#pragma once
#include <vector>
#include <string>
#include <fstream>
#include "User.h"
#include <QDebug>
using namespace std;



template <class T>
class bs{
    //si falla aqui esta el error xd
    vector<T*> arrUser;
public:
    bs(){
        lector();
    }
    void lector(){
        string nick,mail,fecha;
        string numero,teki;
        string prueba="Probando";
        ifstream dataUser("users.tsv");
          while(getline(dataUser,numero,'\t')){

              getline(dataUser,mail,'\t');
              getline(dataUser,nick,'\t');
              getline(dataUser,fecha);
              User *persona = new User(nick,mail,atoi(numero.c_str()),fecha);
              arrUser.push_back(persona);
          }
      }

    User* returnBs(int n){
       int primero=0;
       int ultimo=arrUser.size()-1;
       int medio=(primero+ultimo)/2;
       while (primero<=ultimo)
           {
               if (arrUser.at(medio)->getNro()< n)
               {
                   primero=medio+1;
               }else if (arrUser.at(medio)->getNro()== n)
               {
                   //qDebug()<<QString::fromStdString(arrUser.at(medio)->getNick());
                   return arrUser.at(medio);

                   break;
               }
               else {
                   ultimo = medio - 1;
               }

               medio = (primero+ultimo)/2;
           }

    }

};
