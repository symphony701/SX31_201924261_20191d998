#ifndef FORMPRINCIPAL_H
#define FORMPRINCIPAL_H

#include <QWidget>
#include "Lista.h"
#include "logeador.h"
#include "User.h"
#include "lectorPub.h"
#include "busquedaBinariaUsuarios.h"
#include "Graficador.h"
namespace Ui {
class FormPrincipal;
}

class FormPrincipal : public QWidget
{
    Q_OBJECT

public:
    explicit FormPrincipal(QWidget *parent = nullptr);
    ~FormPrincipal();

private slots:
    void on_ButtonPerfil_clicked();

private:
    Ui::FormPrincipal *ui;
    lector *lec;
    bs<User>*search;
    Graphics* grafica;

};

#endif // FORMPRINCIPAL_H
