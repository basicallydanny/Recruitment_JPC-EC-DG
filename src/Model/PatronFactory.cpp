#include "PatronFactory.h"

PatronFactory::PatronFactory() {
    Colombiano *colombiano = new Colombiano();
    nacionalidades.push_back(colombiano);
    Coreano *coreano = new Coreano();
    nacionalidades.push_back(coreano);
    Frances *frances = new Frances();
    nacionalidades.push_back(frances);
    Sudafricano *sudafricano = new Sudafricano();
    nacionalidades.push_back(sudafricano);
}

Candidato* PatronFactory::crearCandidato(int pasaporte){
    string nombre, correo, linkedIn, github;
    int idNacion;
    bool genero, aprobado = false, agendado = false;

    cout << "Digite el nombre del candidato: ";
    cin >> nombre;

    cout << "Digite el correo del candidato: ";
    cin >> correo;

    cout << "Digite el usuario linkedIn del candidato: ";
    cin >> linkedIn;

    cout << "Digite el usuario GitHub del candidato: ";
    cin >> github;

    cout << "Genero del candidato (1 mujer, 0 hombre): ";
    cin >> genero;

    cout << "Elija la nacion: " << endl;
    cout << "1. Colombiano" << endl;
    cout << "2. Coreano" << endl;
    cout << "3. Frances" << endl;
    cout << "4. Sudafricano" << endl;
    cout << "Opcion: ";
    cin >> idNacion;
    if (idNacion > nacionalidades.size()) {
        throw std::domain_error("Esa nacionalidad no esta disponible en nuestra base de datos");
    }
    Candidato* x = new Candidato(nombre, correo, linkedIn, github, pasaporte, genero, aprobado, agendado, nacionalidades[idNacion - 1]);
    return x;
}

PatronFactory::~PatronFactory() {
    delete(nacionalidades[0]);
    delete(nacionalidades[1]);
    delete(nacionalidades[2]);
    delete(nacionalidades[3]);
}

vector<Nacionalidad *> PatronFactory::retornarVector() {
    return nacionalidades;
}

