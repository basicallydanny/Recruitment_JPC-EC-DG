//
// Created by jpces on 25/11/2021.
//

#ifndef PRUEBA_ENTREVISTA_H
#define PRUEBA_ENTREVISTA_H

#include "Candidato.h"
#include "Reclutador.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <fstream>
#include <map>

class Entrevista{
private:
    Candidato candidato;
public:
    void agendarEntrevistas();
    string nombreMayus( string name );
    void generarGuia( Candidato candidato );
};

#endif //PRUEBA_ENTREVISTA_H
