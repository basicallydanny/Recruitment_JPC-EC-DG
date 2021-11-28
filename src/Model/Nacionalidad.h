#ifndef PRUEBA_NACIONALIDAD_H
#define PRUEBA_NACIONALIDAD_H

#include <iostream>
#include <string>

using namespace std;
using std::string;

class Nacionalidad {
protected:
    string nombrePais;
    bool tipoCultura;
    string contactoVisual;
    string gestos;
    string tacto;
    string respeto;
    string gestionTiempo;
    string estiloComunicacion;
    bool tieneSiesta;
    string festividades;

public:
    virtual ~Nacionalidad() {};
    virtual void consultarConocimientos() = 0;
};
#endif //PRUEBA_NACIONALIDAD_H
