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


struct Node{
    User *dato;
    Node * siguiente;
    int posicion;
};


class Pila {
private:
     Node*pila;
public:
     Pila(){
          pila=NULL;
     }
     ~Pila(){}
     void atarashii(User *elem){
         Node *nuevo_Node=new Node();
         nuevo_Node->dato=elem;

         nuevo_Node->siguiente = pila;
         pila= nuevo_Node;
     }
     User miru(){
         QString todoElPosteo="";
         Node *aux;
         aux=pila;
         while (aux!=NULL) {
             //todoElPosteo=todoElPosteo+QString::fromStdString(aux->dato->nick)+": \n"+QString::fromStdString(aux->dato->mail)+": "+QString::number(aux->dato->nro)+"\n\n";
            // qDebug()<<aux->dato->nick;
             aux=aux->siguiente;
         }
       // return todoElPosteo;
     }


     void Shiranai( QPushButton *follow[],QGridLayout * lay){
         int cont=0;
         Node *aux;
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
