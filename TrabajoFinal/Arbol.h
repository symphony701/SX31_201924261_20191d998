#pragma once
#include <iostream>
#include "User.h"

using namespace std;

template<class T>
struct Nodo{
    T *Elemento;
    Nodo *der;
    Nodo *izq;
   // int posicion;
};
/*
template<class T>
class Tree{
    Nodo<User> *arbol=NULL;
public:
    Nodo *crearNodo(T Persona){
        Nodo<User> *nuevo_nodo= new Nodo<User>();
        nuevo_nodo->Elemento = Persona;
        nuevo_nodo->der = NULL;
        nuevo_nodo->izq = NULL;

        return nuevo_nodo;

    }

    void insertarNodo(Nodo *&arbol, T Persona){
        if(arbol== NULL){
            Nodo<User> *nuevo_nodo = crearNodo(Persona);
            arbol = nuevo_nodo;
        }else{

        }
    }
};
*/
