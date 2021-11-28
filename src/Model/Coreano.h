//
// Created by ecoll on 24/11/2021.
//

#ifndef PRUEBA_COREANO_H
#define PRUEBA_COREANO_H


class Coreano : public Nacionalidad {
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


#endif //PRUEBA_COREANO_H
