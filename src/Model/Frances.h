#ifndef PRUEBA_FRANCES_H
#define PRUEBA_FRANCES_H

#include "Nacionalidad.h"

class Frances : public Nacionalidad {
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
    virtual ~Frances();
    virtual void consultarConocimientos() override;
};


#endif //PRUEBA_FRANCES_H
