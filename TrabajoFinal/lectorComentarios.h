#pragma once
#include "fstream"
#include "string"
#include "QString"
#include <iomanip>
#include <ctime>
#include <sstream>
using namespace std;
class lectorCom{
    string general;
    int IPDPUB;
    string escritura;
public:
    lectorCom(int id){
        IPDPUB=id;
        leer(id);
    }
    void leer(int IDPUB){
        general = "";
        string id,idpub,date,text;
        ifstream data("comment.tsv");
        while (getline(data,id,'\t')) {
            getline(data,idpub,'\t');
            getline(data,date,'\t');
            getline(data,text);
            if(atoi(idpub.c_str())==IDPUB){
                general = general+date+": "+text+'\n';
            }


        }
    }

    QString devolverComentarios(){
        return QString::fromStdString(general);
    }

    void leer2(){
        escritura="";
        string aux;
          ifstream dataUser("comment.tsv");
            while(getline(dataUser,aux,'\n')){
                escritura= escritura+aux+'\n';
            }
    }
    void escritor(string comentario,string idPub){
        ofstream ofs ("comment.tsv",ofstream::out);
        auto t = std::time(nullptr);
        auto tm = *std::localtime(&t);

        std::ostringstream oss;
        oss << std::put_time(&tm, "%Y-%m-%d");
        auto str = oss.str();
        ofs<<escritura;
        string cual= "asdd";
        ofs<<cual+ '\t'+idPub+'\t'+str+'\t'+comentario+'\n';
         ofs.close();


    }
};
