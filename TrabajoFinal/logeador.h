#pragma once
#include <iostream>
#include <QObject>
#include <fstream>
#include <QString>
#include <string>
#include <QFile>
#include <QDataStream>
#include <QDebug>
#include <cstring>
#include <QDebug>
#include "Lista.h"
#include "User.h"
#include <math.h>
using namespace std;
class login{
    Lista<User> *arreglo;
public:
    login(){
        arreglo=new Lista<User>[20];
        hasheabilador(arreglo);


    }
    ~login(){}
    int hash2(string nick){
      int cont=0;
      int potencia= nick.length();
      for(auto letra:nick){
       cont=cont+((letra-96)*(int)pow(27, (float)potencia));
       --potencia;
      }
      return cont;
    }

    int hash3(string nick){
      return hash2(nick) % nick.length();
    }
    Lista<User> *getArreglo(){
        return arreglo;
    }

    User *persona(string form){
        return arreglo[hash3(form)].Modoru(form);
    }



      void hasheabilador(Lista<User> arreglo[]){
      string nick,mail,fecha;
      string numero,teki;
      string prueba="Probando";
      ifstream dataUser("users.tsv");
        while(getline(dataUser,numero,'\t')){

            getline(dataUser,mail,'\t');
            getline(dataUser,nick,'\t');
            getline(dataUser,fecha);

            arreglo[hash3(nick)].atarashii(new User(nick,mail,atoi(numero.c_str()),fecha));

        }

    }
      bool validadorUsuario(string usuario){
          int posicion = hash3(usuario);
          if(arreglo[posicion].kenshou(usuario)){
              return true;
          }else{return false;}
      }

      bool validadorLogin(string usuario,string mail){
          int posicion = hash3(usuario);
          if(arreglo[posicion].kenshouLog(usuario,mail)){
              return true;
          }else{return false;}
      }

};
