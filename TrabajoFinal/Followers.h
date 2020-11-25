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
    Pila<User>* seguidores;
    Pila<User>* seguidos;
    bs<User> * usuarios;
    int cantidadSeguidores;
    int cantidadSeguidos;
public:
    Follow(User*Persona){
        cantidadSeguidores=0;
        cantidadSeguidos=0;

        seguidores = new Pila<User>();

        seguidos = new Pila<User>();
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

            //seguidos
            if(atoi(idu.c_str())==actual->getNro()){
                seguidos->atarashii(usuarios->returnBs(atoi(idf.c_str())));
                cantidadSeguidos++;
            }

        }

    }

    int getNroSeguidores(){return cantidadSeguidores;}
    int getNroSeguidos(){return cantidadSeguidos;}

    void dibujarSeguidos(QGridLayout * lay){
        QPushButton *follow[cantidadSeguidos];
        seguidos->Shiranai(follow,lay);

    }

    void dibujarSeguidores(QGridLayout * lay2){
             qDebug()<<cantidadSeguidores;
         QPushButton *sad[cantidadSeguidores];
         seguidores->Shiranai(sad,lay2);
        // qDebug()<<getNroSeguidores();

    }
};
