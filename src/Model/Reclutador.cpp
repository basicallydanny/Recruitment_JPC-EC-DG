#include "Reclutador.h"

void Reclutador::crearCandidato() {
    Candidato * x = new Candidato("Juan", "jpcespedes", "jpcespedes", "JPCM", 1, false);
    this->candidatos.insert({1, x});

    Candidato * x1 = new Candidato("Emma", "emmacoll", "emmacoll", "EMMA", 2, false);
    this->candidatos.insert({2, x1});
}
