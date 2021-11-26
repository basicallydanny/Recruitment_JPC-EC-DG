#include "Candidato.h"
Candidato::Candidato() {
}
Candidato::Candidato(string nombre, string correo, string linkedIn, string github, int pasaporte, string genero) {
    cout << "Digite el nombre del candidato: ";
    cin >> nombre;

    cout << "Digite el correo del candidato: ";
    cin >> correo;

    cout << "Digite el usuario de LinkedIn del candidato: ";
    cin >> linkedIn;

    cout << "Digite el usuario de HitHub del candidato: ";
    cin >> github;

    cout << "Digite el pasaporte del candidato: ";
    cin >> pasaporte;

    cout << "genero del candidato: (Escriba masculino, femenino u otro ";
    cin >> correo;
}