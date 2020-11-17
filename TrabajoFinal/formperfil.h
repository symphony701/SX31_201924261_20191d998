#ifndef FORMPERFIL_H
#define FORMPERFIL_H

#include <QWidget>
#include "logeador.h"

namespace Ui {
class FormPerfil;
}

class FormPerfil : public QWidget
{
    Q_OBJECT

public:
    explicit FormPerfil(QWidget *parent = nullptr,QString Persona="");
    ~FormPerfil();

private:
    Ui::FormPerfil *ui;
    login *log;
    User *perfil;
};

#endif // FORMPERFIL_H
