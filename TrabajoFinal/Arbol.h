#pragma once
#include <iostream>
#include "Publi.h"
#include <QWidget>
#include "lectorPub.h"
#include "busquedaBinariaUsuarios.h"
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <vector>

using namespace std;


struct Hoja{
    Publicacion Elemento;
    Hoja *der;
    Hoja *izq;
   // int posicion;
};

template<class T>
class Tree{
    Hoja *arbol=NULL;
    vector<Publicacion> *arreglo;


public:
    Tree(){
        arreglo = new vector<Publicacion>();
    }

    Hoja *crearHoja(Publicacion Item){
        Hoja *nuevo_Hoja= new Hoja();
        nuevo_Hoja->Elemento = Item;
        nuevo_Hoja->der = NULL;
        nuevo_Hoja->izq = NULL;

        return nuevo_Hoja;

    }

    Hoja* getRaiz(){return arbol;}

    void insertarHojaFechaPos(Hoja *&arbol, Publicacion Item){
        if(arbol== NULL){
            Hoja *nuevo_Hoja = crearHoja(Item);
            arbol = nuevo_Hoja;
        }else{
             int valorRaiz = arbol->Elemento.getFecha2();

             if(Item.getFecha2()<valorRaiz){
                 insertarHojaFechaPos(arbol->izq,Item);
             }else{
                 insertarHojaFechaPos(arbol->der,Item);
             }
        }
    }


    void insertarHojaFechaNeg(Hoja *&arbol, Publicacion Item){
        if(arbol== NULL){
            Hoja *nuevo_Hoja = crearHoja(Item);
            arbol = nuevo_Hoja;
        }else{
             int valorRaiz = arbol->Elemento.getFecha2();
             if(Item.getFecha2()>valorRaiz){
                 insertarHojaFechaNeg(arbol->izq,Item);
             }else{
                 insertarHojaFechaNeg(arbol->der,Item);
             }
        }
    }




    void insertarHojaLikes(Hoja *&arbol, Publicacion Item){
        if(arbol== NULL){
            Hoja *nuevo_Hoja = crearHoja(Item);
            arbol = nuevo_Hoja;
        }else{
             int valorRaiz = arbol->Elemento.getLikes();
             if(Item.getLikes()>valorRaiz){
                 insertarHojaLikes(arbol->izq,Item);
             }else{
                 insertarHojaLikes(arbol->der,Item);
             }
        }
    }


    void insertHojaFechaNeg(Publicacion owo){
        insertarHojaFechaNeg(arbol,owo);
    }

    void insertHojaFechaPos(Publicacion owo){
        insertarHojaFechaPos(arbol,owo);
    }

    void insertHojaLike(Publicacion owo){
        insertarHojaLikes(arbol,owo);
    }





    void inOrden(Hoja *arbol){
        if(arbol==NULL){
            return;
        }else{
            inOrden(arbol->izq);
            //cout arbol.dato;
            //-------------------------EXPERIMENTAL---------


            arreglo->push_back(arbol->Elemento);


            //--------------------uwu---------------
            inOrden(arbol->der);
        }
    }

    void wakarimasen(){
        inOrden(arbol);

    }


    Publicacion  getPublicacion(int i){
        return arreglo->at(i);
    }










};

