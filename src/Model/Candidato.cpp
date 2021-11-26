#include "Candidato.h"
Candidato::Candidato() {
}

Candidato::Candidato(string nombre, string correo, string linkedIn, string github, int pasaporte, bool genero) {
    this->nombre = nombre;
    this->correo = correo;
    this->linkedIn = linkedIn;
    this->pasaporte = pasaporte;
    this->genero = genero;
}

string Candidato::getNombre(){
    return this->nombre;
}

string Candidato::getCorreo(){
    return this->correo;
}

string Candidato::getLinkedIn(){
    return this->linkedIn;
}

string Candidato::getGithub(){
    return this->github;
}

string Candidato::getPasaporte(){
    return this->pasaporte;
}

bool Candidato::getGenero(){
    return this->genero;
}