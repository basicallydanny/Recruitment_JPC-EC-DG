#ifndef RECRUITMENT_JPC_EC_DG_RECLUTADOR_H
#define RECRUITMENT_JPC_EC_DG_RECLUTADOR_H

#include "Candidato.h"
#include "Entrevista.h"
#include "Nacionalidad.h"
#include "PatronFactory.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <map>

using std::map;
using std::vector;
using std::string;

class Reclutador {
private:
    map<int, Candidato*> candidatos;
    PatronFactory fabrica;
public:
    Reclutador();
    ~Reclutador();
    void crearCandidato(int pasaporte);
    void aprobarCandidato(int pasaporte);
    void agendarEntrevistas(int pasaporte);
    void generarGuia(int pasaporte);
    void generarCarta(int pasaporte);
    void consultarConocimientos(int idNacion);
    bool verExisteCandidato(int pasaporte);
    string intAString(int codigo);
    string nombreMayus( string name );
    void generarGuia(int pasaporte);
};


#endif //RECRUITMENT_JPC_EC_DG_RECLUTADOR_H
