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
#include <QDate>
#include <QDateTime>
#include <User.h>
#include <QPushButton>
#include <QGridLayout>
using namespace std;

template<class T>
struct Node{
    T *dato;
    Node * siguiente;
    int posicion;
};

template<class T>
class Pila {
private:
     Node<T>*pila;
public:
     Pila(){
          pila=NULL;
     }
     ~Pila(){}
     void atarashii(T *elem){
         Node<T> *nuevo_Node=new Node<T>();
         nuevo_Node->dato=elem;

         nuevo_Node->siguiente = pila;
         pila= nuevo_Node;
     }
     T miru(){
         T todoElPosteo="";
         Node<T> *aux;
         aux=pila;
         while (aux!=NULL) {
             todoElPosteo=todoElPosteo+aux->fecha+": \n"+aux->emisor+": "+aux->mensaje+"\n\n";
             aux=aux->siguiente;
         }
        return todoElPosteo;
     }


     void Shiranai( QPushButton *follow[],QGridLayout * lay){
         int cont=0;
         Node<T> *aux;
         aux=pila;
         while (aux!=NULL) {
             follow[cont] = new QPushButton(QString::fromStdString(aux->dato->getNick()));
                // qDebug()<<"LLegue aqui";
            // qDebug()<<QString::fromStdString(aux->dato->getNick());
             lay->addWidget(follow[cont]);
             aux=aux->siguiente;
         }
     }


};
