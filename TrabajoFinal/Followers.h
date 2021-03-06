#pragma once
#include "Pilas.h"
#include <iostream>
#include <string>
#include "User.h"
#include <fstream>
#include "busquedaBinariaUsuarios.h"
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

class Follow{
    Pila* seguidores;
    Pila* seguidos;
    bs<User> * usuarios;
    int cantidadSeguidores;
    int cantidadSeguidos;
    bool valseguidor=false;
    int usuarioLogueado;
    string aux2;
    User*Personita;
public:
    Follow(User*Persona,int IDUSUARIO){
        Personita= Persona;
        usuarioLogueado= IDUSUARIO;
        cantidadSeguidores=0;
        cantidadSeguidos=0;

        seguidores = new Pila();

        seguidos = new Pila();
        usuarios = new bs<User>();
        leer(Persona);
    }

    void leer(User *actual){
        string idu,idf;
        ifstream dataFollow("followers.txt");

        while(getline(dataFollow,idu,',')){
            getline(dataFollow,idf);

            //seguidores
            if(atoi(idf.c_str())==actual->getNro()){
                seguidores->atarashii(usuarios->returnBs(atoi(idu.c_str())));
                cantidadSeguidores++;
            }

            if(atoi(idf.c_str())==usuarioLogueado){
                valseguidor=true;
            }

            //seguidos
            if(atoi(idu.c_str())==actual->getNro()){
                seguidos->atarashii(usuarios->returnBs(atoi(idf.c_str())));
                cantidadSeguidos++;
            }

        }

    }

    void leer2(){
        string aux;
        aux2="";
         ifstream dataFollow("followers.txt");
         while(getline(dataFollow,aux,'\n')){
             aux2=aux2+aux+'\n';
         }



    }

    void escribir(){
         ofstream ofs ("followers.txt",ofstream::out);
         ofs << aux2;
         ofs <<to_string(usuarioLogueado)+','+to_string(Personita->getNro());
         ofs.close();
         valseguidor= true;

    }

    bool esSeguidor(){
        return valseguidor;
    }

    int getNroSeguidores(){return cantidadSeguidores;}
    int getNroSeguidos(){return cantidadSeguidos;}

    void dibujarSeguidos(QGridLayout * lay,QWidget *parent, QPushButton * follow[]){
        seguidos->Shiranai(follow,lay);

    }

    void dibujarSeguidores(QGridLayout * lay2,QWidget *parent, QPushButton * follow[]){

         seguidores->Shiranai(follow,lay2);
        // qDebug()<<getNroSeguidores();

    }

};
