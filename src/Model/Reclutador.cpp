#include "Reclutador.h"

bool Reclutador::verExisteCandidato(int pasaporte) {
    for(map<int, Candidato*>::iterator it = candidatos.begin(); it != candidatos.end(); it++){
        if(it->first == pasaporte){
            return true;
        }
    }
    return false;
}

void Reclutador::crearCandidato() {
    string nombre, correo, linkedIn, github;
    int pasaporte;
    int validaGenero;
    bool genero;
    int validaAprobado;
    bool aprobado;

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

    aprobado = false;

    Candidato * x = new Candidato(nombre, correo, linkedIn, github, pasaporte, genero, aprobado);
    this->candidatos.insert({pasaporte, x});
}


void Reclutador::aprobarCandidato(int pasaporte){
    for (int i = 1; i < candidatos.size() + 1; i++) {
        if (this->candidatos[i]->getPasaporte() == pasaporte) {
            candidatos[i]->setAprobado(true);
        }
    }
 }


void Reclutador::agendarEntrevistas(int pasaporte) {
    int hora, i;
    cout << "Digite la hora de la entrevista (No antes de las 10 a.m, en hora militar): ";
    cin >> hora;
    for (i = 1; i < candidatos.size() + 1; i++) {
        if (this->candidatos[i]->getPasaporte() == pasaporte) {
            this->entrevistasAgendadas.insert({hora, candidatos[i]});
        }
    }
}

void Reclutador::generarCarta(int pasaporte) {

    if (verExisteCandidato(pasaporte) == false ) {
        throw std::domain_error("El candidato con este pasaporte no existe.\n");
    }

    for (int i = 1; i < candidatos.size() + 1; i++) {
        if (this->candidatos[i]->getPasaporte() == pasaporte) {

            if (this->candidatos[i]->getEstado() != true ) {
                throw std::domain_error("El candidato no ha sido aceptado.\n");
            }

            std::string carta = "CartaBienvenida_" + (this->candidatos[i]->getNombre()) + ".txt";
            ofstream write (carta.c_str());
            write << "            CARTA DE BIENVENIDA        " << "\n\n";

            if (this->candidatos[i]->getGenero() == true){
                    write << "Estimada" << this->candidatos[i]->getNombre() << ", \n\n";
                    write << "Es de nuestro agrado hacer de su conocimiento que ha sido ACEPTADA " ;
            } else {
                    write << "Estimado" << this->candidatos[i]->getNombre() << ", \n";
                    write << "Es de nuestro agrado hacer de su conocimiento que ha sido ACEPTADO " ;
            }


            write << "\n\nVALORES DE LA COMPAÑÍA:";
            write << "\n\nTransparencia y responsabilidad:\n";
            write << "\nEn la compañía, es de suma importancia la responsabilidad en el trabajo,"
            << "ya que de esto depende no solo su desempeño individualmente, sino de todo el equipo de trabajo y de la empresa en sí."
            << "Junto con esto, se le suma la transparencia, ya que ayudándonos de esta podemos lograr también una responsabilidad mayor"
            << "para con la empresa, e incluso para su vida personal.";
            write << "\n\nEficiencia y resultados:\n";
            write << "\nSin dejar de lado la importancia del respeto, la responsabilidad y la transparencia,"
            << "otro aspecto importante en los valores de la compañía es el deber de mostrar resultados."
            << "La compañía está enfocada en seguir desarrollando cada aspecto de nuestros sistemas y servicios para darle la mejor de las experiencias a nuestros clientes,"
            << "y para cumplir este objetivo se necesita de la cooperación y del compromiso de todos los miembros de la compañía, cada uno aportando su parte mostrando sus resultados.";
            write << "\n\nInclusión y diversidad:\n";
            write << "Al ser una empresa que recluta gente a nivel internacional, es de suma importancia entender la diversidad"
            << "que hay en todos los equipos de trabajo, y entender que está sumamente prohibido cualquier discriminación por:"
            << "género, raza, religión, cultura, orientación sexual, etc."
            << "La compañía siempre velará por que todos sus empleados se sientan cómodos y a gusto en su trabajo.";

            write << "\n\n¡LO ESPERAMOS CON MUCHO ENTUSIASMO!";

            write.close();
            cout << "La carta ha sido generada con exito.";
            }
        }
}

void Reclutador::consultarConocimientos(int idNacion) {
    int posNacion;
    if (idNacion > nacionalidades.size()) {
        throw std::domain_error("Esa nacionalidad no esta disponible en nuestra base de datos");
    }
    posNacion = idNacion - 1;
    Nacionalidad *pNacionEscogida = nacionalidades.at(idNacion - 1);
    pNacionEscogida->consultarConocimientos();

}