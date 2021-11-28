#ifndef PRUEBA_COLOMBIANO_H
#define PRUEBA_COLOMBIANO_H

#include <iostream>
#include "Nacionalidad.h"

using namespace std;

class Colombiano : public Nacionalidad {
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
    virtual ~Nacionalidad();
    virtual void consultarConocimientos() override;
};

#endif //PRUEBA_COLOMBIANO_H
