//
// Created by jpces on 25/11/2021.
//

#ifndef PRUEBA_ENTREVISTA_H
#define PRUEBA_ENTREVISTA_H

#include "Candidato.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <map>

class Entrevista{
private:
    Candidato candidato;
    vector<Entrevista> entrevistasAgendadas;
public:
    void agendarEntrevistas();
};

#endif //PRUEBA_ENTREVISTA_H
