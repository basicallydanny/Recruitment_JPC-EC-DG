#ifndef PRUEBA_SUDAFRICANO_H
#define PRUEBA_SUDAFRICANO_H

#include "Nacionalidad.h"

class Sudafricano : public Nacionalidad {
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


#endif //PRUEBA_SUDAFRICANO_H
