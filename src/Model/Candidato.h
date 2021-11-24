
#ifndef PRUEBA_CANDIDATO_H
#define PRUEBA_CANDIDATO_H

#include <iostream>
#include <string>
#include "Nacionalidad.h"

using namespace std;
using std::string;

class Candidato {
protected:
    string nombre;
    string correo;
    string linkedIn;
    string github;
    string pasaporte;
    bool genero;
    Nacionalidad nacionalidad;
public:
    Candidato();
    Candidato(string nombre, string correo, string linkedIn, string github, string pasaporte, bool genero);
    Nacionalidad getNacionalidad();
    setNacionalidad( nacionalidad Nacionalidad );
};

#endif //PRUEBA_CANDIDATO_H
