//
// Created by ecoll on 24/11/2021.
//

#ifndef PRUEBA_RECLUTADOR_H
#define PRUEBA_RECLUTADOR_H

#include "Candidato.h"
#include "Entrevista.h"
#include "Nacionalidad.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <map>

class Reclutador {
private:
    map<int, Candidato*> candidatos;
    map<int, Candidato*> entrevistasAgendadas;
    map<int, Candidato*> candidatosAprobados;
public:
    void crearCandidato();
    void agendarEntrevistas(int pasaporte);
    void generarGuia(int pasaporte);
    void generarCarta(int pasaporte);
};


#endif //PRUEBA_RECLUTADOR_H