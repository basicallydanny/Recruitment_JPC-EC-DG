#include "Reclutador.h"

void Reclutador::crearCandidato() {
    string nombre, correo, linkedIn, github;
    int pasaporte;
    int validaGenero;
    bool genero;

    cout << "Digite el nombre del candidato: ";
    cin >> nombre;

    cout << "Digite el correo del candidato: ";
    cin >> correo;

    cout << "Digite el usuario linkedIn del candidato: ";
    cin >> linkedIn;

    cout << "Digite el usuario GitHub del candidato: ";
    cin >> github;

    cout << "Digite el pasaporte del candidato: ";
    cin >> pasaporte;

    cout << "Genero del candidato (1 mujer, 0 hombre): ";
    cin >> validaGenero;

    if (validaGenero == 1){
        genero = true;
    }else{
        genero = false;
    }
    Candidato * x = new Candidato(nombre, correo, linkedIn, github, pasaporte, genero);
    this->candidatos.insert({1, x});

    /*Candidato * x1 = new Candidato("Emma", "emmacoll", "emmacoll", "EMMA", 2, false);
    this->candidatos.insert({2, x1});*/

}
