//
// Created by ecoll on 24/11/2021.
//

#ifndef PRUEBA_RECLUTADOR_H
#define PRUEBA_RECLUTADOR_H

#include "Candidato.h"
#include "Nacionalidad.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

class Reclutador {
private:
    Candidato map<int, Candidato>;
public:
    void agendarEntrevistas(int id);
    void generarGuia(Candidato candidato);
    void generarCarta(Candidato candidato);
};


#endif //PRUEBA_RECLUTADOR_H
