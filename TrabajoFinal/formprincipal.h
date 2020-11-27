#ifndef FORMPRINCIPAL_H
#define FORMPRINCIPAL_H

#include <QWidget>
#include "Lista.h"
#include "logeador.h"
#include "User.h"
#include <QLabel>
#include "lectorPub.h"
#include "busquedaBinariaUsuarios.h"
#include "Graficador.h"
#include "register.h"
namespace Ui {
class FormPrincipal;
}

class FormPrincipal : public QWidget
{
    Q_OBJECT

public:
    explicit FormPrincipal(QWidget *parent = nullptr,int IDUSER=0,string nickActual="");
    ~FormPrincipal();

private slots:
    void on_ButtonPerfil_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_clicked();

    void on_ButtonPerfil_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::FormPrincipal *ui;
    lector *lec;
    bs<User>*search;
    Graphics* grafica;
    QGridLayout * lay;
    reg *registroPubli;
    int IDUSER;
    string nickActual;

};

#endif // FORMPRINCIPAL_H
