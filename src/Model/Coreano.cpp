#include "Coreano.h"

void consultarConocimientos(){
    cout << nombrePais << endl;
    cout << "Su cultura es " << tipoCultura << "\n"
         << contactoVisual << "\n"
         << "Sus gestos mas notables son " << gestos << "\n"
         << "En cuanto al tacto, " << tacto << "\n"
         << "Su perspectiva frente al respeto es " << respeto << "\n"
         << "Gestionan el tiempo de tal manera que " << gestionTiempo << "\n"
         << "Para hablar " << estiloComunicacion << endl;
    if (tieneSiesta == True ) {
        write << "Su cultura tiene siestas." << "\n";
    } else {
        write << "Su cultura no tiene siestas." << "\n";
    }
    cout << "Algunas festividades son: " << festividades << "\n";
}