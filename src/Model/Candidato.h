#ifndef CANDIDATO_H
#define CANDIDATO_H

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
    int pasaporte;
    bool genero;
    Nacionalidad nacionalidad;

public:
    Candidato();
    Candidato(string nombre, string correo, string linkedIn, string github, int pasaporte, bool genero);
    Nacionalidad getNacionalidad();
    void setNacionalidad( Nacionalidad nacionalidad );
    string getNombre();
    string getCorreo();
    string getLinkedIn();
    string getGithub();
    int getPasaporte();
    bool getGenero();
};

#endif //CANDIDATO_H
