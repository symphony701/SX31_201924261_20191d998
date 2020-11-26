#pragma once
#include <iostream>
#include <string>
using namespace std;


class Publicacion{
private:
    int idPub;
    int idUser;
    string content;
    int likes;
    string fecha;
    string content2;
    int fecha2;



public:
    Publicacion(int idPub,int idUser,string content,int likes,string fecha,
                string content2,int fecha2)
    {
        this->idPub=idPub;
        this->idUser=idUser;
        this->content=content;
        this->likes=likes;
        this->fecha=fecha;
        this->content2=content2;
        this->fecha2=fecha2;

    }
    Publicacion(){}
    int getIdPub(){return idPub;}
    int getIdUser(){return idUser;}
    int getLikes(){return likes;}
    int getFecha2(){return fecha2;}
    string getContent(){return content;}
    string getContent2(){return content2;}
    string getFecha(){return fecha;}


};
