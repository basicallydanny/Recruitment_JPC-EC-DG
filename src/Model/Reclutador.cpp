#include "Reclutador.h"
/// Funcion que confirma si el candidato existe en el sistema
/// \param pasaporte es la variable con la que se va a buscar el candidato
/// \return retorna true o false dependiendo si encuentra el candidato o no
bool Reclutador::verExisteCandidato(int pasaporte) {
    for(map<int, Candidato*>::iterator it = candidatos.begin(); it != candidatos.end(); it++){
        if(it->first == pasaporte){
            return true;
        }
    }
    return false;
}

/// Funcion que cambia el estado de aprobado a true para el candidato seleccionado, para indicar que fue aceptado en la empresa
/// \param pasaporte es la variable con la que se va a buscar el candidato
void Reclutador::aprobarCandidato(int pasaporte){
    if (verExisteCandidato(pasaporte)) {
        throw std::domain_error("El candidato con este pasaporte no existe.\n");
    }
    for (int i = 0; i < candidatos.size() + 1; i++) {
        if (verExisteCandidato(pasaporte)) {
            for(map<int, Candidato*>::iterator it = candidatos.begin(); it != candidatos.end(); it++){
                if(it->first == pasaporte && candidatos[i]->getAgendado()){
                    candidatos[i]->setAprobado(true);
                }
            }
        }
    }
}

/// Funcion que agenda las entrevistas para cada candidato al que se le indique
/// \param pasaporte es la variable con la que se va a buscar el candidato
void Reclutador::agendarEntrevistas(int pasaporte) {
    int hora, i;
    if (!verExisteCandidato(pasaporte)) {
        throw std::domain_error("El candidato no existe, crealo en el sistema\n");
    }
    cout << "Digite la hora de la entrevista (No antes de las 10 a.m, en hora militar): ";
    cin >> hora;
    for (i = 0; i < candidatos.size() + 1; i++){
        if (this->candidatos[i]->getPasaporte() == pasaporte) {
            candidatos[i]->setAgendado(true);
        }
    }
}
/// Funcion que genera la carta de bienvenida para el candidato seleccionado, pero primero confirma que el candidato tenga aprobado en true
/// \param pasaporte
void Reclutador::generarCarta(int pasaporte) {

    if (verExisteCandidato(pasaporte) == false ) {
        throw std::domain_error("El candidato con este pasaporte no existe.\n");
    }

    Colombiano colombiaTemp;

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

            write << "Algunas cosas que debe saber de colombia son:";
            write << colombiaTemp.consultarConocimientosString();

            write << "\n\n¡LO ESPERAMOS CON MUCHO ENTUSIASMO!";

            write.close();
            cout << "La carta ha sido generada con exito.";
        }
    }
}

/// Funcion que segun la nacionalidad seleccionada, muestra en pantalla las caracteristicas culturales de dicha nacion
/// \param idNacion variable que se utiliza para seleccionar cada nacionalidad que se va a imprimir
void Reclutador::consultarConocimientos(int idNacion) {
    if (idNacion > fabrica.retornarVector().size()) {
        throw std::domain_error("Esa nacionalidad no esta disponible en nuestra base de datos");
    }
    Nacionalidad *pNacionEscogida = fabrica.retornarVector().at(idNacion - 1);
    pNacionEscogida->consultarConocimientos();

}

/// Funcion que convierte los caracteres del nombre de Candidato en letras Mayus
/// \param name
string Reclutador::nombreMayus( string name ){
    int n = name.length();
    for(int i = 0 ; i < n ; i++){
        if(name[i]  >= 'a' && name[i]<='z' ){
            char a = name[i] - 32 ;
        }
    }
    return name;
}

/// Funcion que permite convertir el pasaporte de candidato en un string
/// \param pasaporte
string Reclutador::intAString(int codigo){
    auto texto = std::to_string(codigo);
    return texto;
}

/// Funcion que genera la guia del entrevistador segunel candidato seleccionado.
/// \param pasaporte
void Reclutador::generarGuia(int pasaporte) {
    if (!verExisteCandidato(pasaporte)) {
        throw std::domain_error("El candidato no existe, crealo en el sistema\n");
    }

    int indexNacional;
    Candidato *candidatoTemp;

    std::string guia = "GuíaDeEntrevista_" + (intAString(pasaporte)) + ".txt";

    auto iter = candidatos.begin();
    while (iter != candidatos.end()) {
        if ( iter->second->getPasaporte() == pasaporte ){
            candidatoTemp = iter->second;
            indexNacional = iter->first;
            break;
        }
    }

    vector <Nacionalidad *> vectorTemp = fabrica.retornarVector();

    for (int i = 1; i < candidatos.size() + 1; i++) {
        if (this->candidatos[i]->getPasaporte() == pasaporte) {

            ofstream write(guia.c_str());

            write << "            GUÍA DE ENTREVISTA        " << "\n\n";
            write << "Esta guia de entrevista esta creada para el candidato: "
                  << nombreMayus(candidatoTemp->getNombre())
                  << "\n";

            for (auto i = 0; i < vectorTemp.size(); i++) {
                if ( indexNacional == i ){
                    if (candidatoTemp->getGenero() == 0) {
                        write << "El candidato es de " << vectorTemp[i]->printNombre() << "\n\n";
                    } else {
                        write << "La candidata es de " << vectorTemp[i]->printNombre() << "\n\n";
                    }
                    write << vectorTemp[i]->consultarConocimientosString();
                }
            }

            write << "\n\nREDES SOCIALES\n";
            write << "Correo: " << candidatoTemp->getCorreo() << "\n";
            write << "LinkedIn: " << candidatoTemp->getLinkedIn() << "\n";
            write << "Github: " << candidatoTemp->getGithub() << "\n\n";

            write.close();
            cout << "La guia ha sido generada con exito.";
        }
    }
}
/// Funcion que llama desde la clase del patron factory a crearCandidato, y lo agrega al mapa de candidatos
/// \param pasaporte es la variable del pasaporte del candidato, que se pide desde antes y se manda como parametro
void Reclutador::crearCandidato(int pasaporte) {
    Candidato* candiTemp;
    candiTemp = fabrica.crearCandidato(pasaporte);
    candidatos.insert({pasaporte, candiTemp});
}
///Destructor
Reclutador::~Reclutador() {
    for(map<int, Candidato*>::iterator it = candidatos.begin(); it != candidatos.end(); it++){
        Candidato * CandidatoTemp = candidatos[it->first];
        delete CandidatoTemp;
    }
}

Reclutador::Reclutador() {
}

