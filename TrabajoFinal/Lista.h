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
#include "User.h"
using namespace std;

template<class T>
struct Nodo{
    T *Elemento;
    Nodo * siguiente;
    int posicion;
public:
    Nodo(){};
};


template<class T>
class Lista {

private:
    Nodo<T>*lista;
    int size;
public:
    Lista(){
        size=0;
        lista=NULL;
    }
    void atarashii(User* element){
        Nodo<T> *nuevo_nodo=new Nodo<T>();
        nuevo_nodo->Elemento=element;
        nuevo_nodo->siguiente=NULL;
        Nodo<T>*aux = new Nodo<T>();
       if(lista==NULL){
           lista=nuevo_nodo;
       }else{
           aux=lista;
           while(aux->siguiente!=NULL){
               aux=aux->siguiente;
           }
           aux->siguiente=nuevo_nodo;
       }
        size++;
    }
    string miru(){
        string chat="";
        Nodo<T> *actual=new Nodo<T>();
        actual=lista;
        while (actual!=NULL) {
            chat=chat+actual->Elemento->getNick()+" "+"\n";
            actual=actual->siguiente;
        }
        return chat;
    }

    bool kenshou(string form){
        Nodo<T> *actual=new Nodo<T>();
        actual=lista;
        bool val=false;
        while (actual!=NULL) {
            if(actual->Elemento->getNick()==form){
                val=true;
            }

            actual=actual->siguiente;

        }
          return val;

    }

    bool kenshouLog(string nick, string mail){
        Nodo<T> *actual=new Nodo<T>();
        actual=lista;
        bool val=false;
        while (actual!=NULL) {
            if((actual->Elemento->getNick()==nick)&&(actual->Elemento->getMail()==mail)){
                val=true;
            }

            actual=actual->siguiente;

        }
          return val;
    }

    User *Modoru(string form){
        Nodo<T> *actual=new Nodo<T>();
        actual=lista;
        while (actual!=NULL) {
            if(actual->Elemento->getNick()==form){
                return actual->Elemento;
            }

            actual=actual->siguiente;

        }

        return nullptr;
    }


    void furui(){
        Nodo<T> * ulti = new Nodo<T>();
        Nodo<T> *penulti=new Nodo<T>();
        ulti=lista;
        penulti=lista;
        if(lista!=NULL){
            if(ulti->siguiente==NULL){
                lista=NULL;
                delete ulti;
            }else{
                while(ulti->siguiente!=NULL){
                    penulti=ulti;
                    ulti=ulti->siguiente;
                }
                penulti->siguiente=NULL;
                delete ulti;
            }
        }

    }


};
