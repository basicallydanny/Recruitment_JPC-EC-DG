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
    bool aprobado;
    Nacionalidad nacionalidad;

public:
    Candidato();
    Candidato(string nombre, string correo, string linkedIn, string github, int pasaporte, bool genero, bool aprobado);
    Nacionalidad getNacionalidad();
    void setNacionalidad( Nacionalidad nacionalidad );
    string getNombre();
    string getCorreo();
    string getLinkedIn();
    string getGithub();
    int getPasaporte();
    bool getGenero();
    bool getEstado();

    void setNombre(const string &nombre);

    void setCorreo(const string &correo);

    void setLinkedIn(const string &linkedIn);

    void setGithub(const string &github);

    void setPasaporte(int pasaporte);

    void setGenero(bool genero);

    void setAprobado(bool aprobado);
};

#endif //CANDIDATO_H


