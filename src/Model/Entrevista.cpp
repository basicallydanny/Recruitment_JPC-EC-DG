//
// Created by jpces on 25/11/2021.
//

#include "Entrevista.h"
using namespace std;


void Entrevista::agendarEntrevistas() {
    int pasaporte;
    cout << "Digite el pasaporte del candidato: ";
    cin >> pasaporte;
    /*for (candidato.) {

    }*/
}

string Entrevista::nombreMayus( string name ){
    int n = name.length();
    for(int i = 0 ; i < n ; i++){
        if(name[i]  >= 'a' && name[i]<='z' ){
            char a = name[i] - 32 ;
        }
    }
    return name;
}

void Entrevista::generarGuia(Candidato candidato){

    std::string guia = "GuíaDeEntrevista_" + (candidato.getPasaporte()) + ".txt";  
    ofstream write (guia.c_str());

    write << "            GUÍA DE ENTREVISTA        " << "\n\n";
    write << "Esta guía de entrevista esta diseñada para el candidato: " << nombreMayus(candidato.getNombre()) << "\n";
    write << "Para la fecha " << /*Inserte la fecha*/ << "\n\n";

    if (candidato.getGenero() == 0) {
        write << "El candidato es de nacionalidad " << /*Inserte nacionalidad*/ << "\n\n";
    } else {
        write << "La candidata es de nacionalidad " << /*Inserte nacionalidad*/ << "\n\n";
    };

    // candidato->nacionalidad.get

    write << "REDES SOCIALES ";
    write << "Correo: " << candidato.getCorreo() << "\n";
    write << "LinkedIn: " << candidato.getLinkedIn() << "\n";
    write << "Github: " << candidato.getGithub() << "\n";

    write.close();

}