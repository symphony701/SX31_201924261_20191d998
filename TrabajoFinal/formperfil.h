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
namespace Ui {
class FormPerfil;
}

class FormPerfil : public QWidget
{
    Q_OBJECT

public:
    explicit FormPerfil(QWidget *parent = nullptr,User *Persona=nullptr,string persona="");

    ~FormPerfil();
    void Rinku();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

private:
    Ui::FormPerfil *ui;
    Follow *followers;
    lector *lec;
    bs<User>*search;
    Graphics* grafica;
    QGridLayout * lay;

};

#endif // FORMPERFIL_H
