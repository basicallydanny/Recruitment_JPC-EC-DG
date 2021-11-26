
#ifndef PRUEBA_CANDIDATO_H
#define PRUEBA_CANDIDATO_H

#include <iostream>
#include <string>
#include "Nacionalidad.h"
#include <vector>
#include <iterator>
#include <map>

using namespace std;
using std::string;

class Candidato {
protected:
    string nombre;
    string correo;
    string linkedIn;
    string github;
    int pasaporte;
    string genero;
    Nacionalidad nacionalidad;
public:
    Candidato();
    Candidato(string nombre, string correo, string linkedIn, string github, int pasaporte, string genero);
    Nacionalidad getNacionalidad();
    void setNacionalidad( Nacionalidad Nacionalidad );
};

#endif //PRUEBA_CANDIDATO_H
