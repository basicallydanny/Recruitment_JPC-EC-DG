#include "Candidato.h"
Candidato::Candidato() {
}

Candidato::Candidato(string nombre, string correo, string linkedIn, string github, int pasaporte, bool genero, bool aprobado) {
    this->nombre = nombre;
    this->correo = correo;
    this->linkedIn = linkedIn;
    this->pasaporte = pasaporte;
    this->genero = genero;
    this->aprobado = aprobado;
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

int Candidato::getPasaporte(){
    return this->pasaporte;
}

bool Candidato::getGenero(){
    return this->genero;
}

bool Candidato::getEstado() {
    return this->aprobado;
}