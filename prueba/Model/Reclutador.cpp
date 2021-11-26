//
// Created by ecoll on 24/11/2021.
//

#include "Reclutador.h"

void Reclutador::crearCandidato() {
    Candidato * x = new Candidato("Juan", "jpcespedes", "jpcespedes", "JPCM", 1, "masculino");
    this->candidatos.insert({1, x});

    Candidato * x1 = new Candidato("Emma", "emmacoll", "emmacoll", "EMMA", 2, "masculino");
    this->candidatos.insert({2, x1});
}

