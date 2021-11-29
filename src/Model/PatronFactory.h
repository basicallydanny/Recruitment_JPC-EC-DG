#ifndef RECRUITMENT_JPC_EC_DG_PATRONFACTORY_H
#define RECRUITMENT_JPC_EC_DG_PATRONFACTORY_H

#include "Candidato.h"
#include "Nacionalidad.h"
#include "Coreano.h"
#include "Colombiano.h"
#include "Sudafricano.h"
#include "Frances.h"
#include <vector>

using namespace std;

class PatronFactory {
private:
    vector<Nacionalidad*> nacionalidades;
public:
    ~PatronFactory();
    PatronFactory();
    vector<Nacionalidad*> retornarVector();
    Candidato* crearCandidato(int pasaporte);
};


#endif //RECRUITMENT_JPC_EC_DG_PATRONFACTORY_H
