#ifndef FORMPERFIL_H
#define FORMPERFIL_H

#include <QWidget>
#include <QLabel>
#include "logeador.h"
#include "User.h"
#include "Followers.h"
#include "Graficador.h"
#include "lectorPub.h"
#include "busquedaBinariaUsuarios.h"
#include "Lista.h"
#include "register.h"
namespace Ui {
class FormPerfil;
}

class FormPerfil : public QWidget
{
    Q_OBJECT

public:
    explicit FormPerfil(QWidget *parent = nullptr,User *Persona=nullptr,string persona="",int IDUSUARIO=0);

    ~FormPerfil();
    void Rinku();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::FormPerfil *ui;
    Follow *followers;
    lector *lec;
    bs<User>*search;
    Graphics* grafica;
    QGridLayout * lay;
    int IDUSER;
    string nickActual;
    reg *registroPubli;
    User*Personita;

};

#endif // FORMPERFIL_H
