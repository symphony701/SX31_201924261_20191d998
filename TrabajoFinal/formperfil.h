#ifndef FORMPERFIL_H
#define FORMPERFIL_H

#include <QWidget>
#include "logeador.h"
#include "User.h"
#include "Followers.h"
namespace Ui {
class FormPerfil;
}

class FormPerfil : public QWidget
{
    Q_OBJECT

public:
    explicit FormPerfil(QWidget *parent = nullptr,User *Persona=nullptr);
    ~FormPerfil();

private:
    Ui::FormPerfil *ui;
    Follow *followers;

};

#endif // FORMPERFIL_H
