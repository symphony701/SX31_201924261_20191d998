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
#include <vector>
#include <iomanip>
#include <ctime>
#include <sstream>
using namespace std;


class reg{
  private:
    vector<User> registros;
public:
    reg(){
        Lector();
    }

    void Lector(){
        string nick,mail,fecha;
        string numero,teki;
        string prueba="Probando";
        ifstream dataUser("users.tsv");
          while(getline(dataUser,numero,'\t')){

              getline(dataUser,mail,'\t');
              getline(dataUser,nick,'\t');
              getline(dataUser,fecha);

              registros.push_back(User(nick,mail,atoi(numero.c_str()),fecha));

          }
    }


    void Escritor(string nick,string mail){
        int contador= 0;
        ofstream ofs ("users.tsv",ofstream::out);
        for(auto i :registros){
            contador++;
            ofs<<to_string(i.getNro())+'\t'+i.getMail()+'\t'+i.getNick()+'\t'+i.getFecha()+'\n';
        }
        auto t = std::time(nullptr);
        auto tm = *std::localtime(&t);

        std::ostringstream oss;
        oss << std::put_time(&tm, "%Y-%m-%d");
        auto str = oss.str();
        contador++;
        ofs<<to_string(contador)+'\t'+mail+'\t'+nick+'\t'+str+'\n';

         ofs.close();
    }





};
