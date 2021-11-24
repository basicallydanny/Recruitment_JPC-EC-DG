//
// Created by ecoll on 24/11/2021.
//

#ifndef PRUEBA_NACIONALIDAD_H
#define PRUEBA_NACIONALIDAD_H

#include <iostream>
#include <string>

using namespace std;
using std::string;

class Nacionalidad{
protected:
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
    virtual ~Nacionalidad(){};
    bool getTipoCultura();
    string getContactoVisual();
    string getGestos();
    string getTacto();
    string getRespeto();
    string getGestionTiempo();
    string getEstiloComunicacion();
    bool getTieneSiesta();
    string getFestividades();
};

#endif //PRUEBA_NACIONALIDAD_H
