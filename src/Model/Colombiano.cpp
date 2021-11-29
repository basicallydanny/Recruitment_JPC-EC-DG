#include "Colombiano.h"
///Funcion que si se selecciona la nacionalidad colombiana, muestra en pantalla sus caracteriscticas culturales
void Colombiano::consultarConocimientos(){
    cout << "Su cultura es " << tipoCultura << "\n"
         << contactoVisual << "\n"
         << "Sus gestos mas notables son " << gestos << "\n"
         << "En cuanto al tacto, " << tacto << "\n"
         << "Su perspectiva frente al respeto es " << respeto << "\n"
         << "Gestionan el tiempo de tal manera que " << gestionTiempo << "\n"
         << "Para hablar " << estiloComunicacion << endl;
    if (tieneSiesta) {
        cout << "Su cultura tiene siestas." << "\n" << endl;
    } else {
        cout<< "Su cultura no tiene siestas." << "\n" << endl;
    }
    cout << "Algunas festividades son: " << festividades << "\n";
}

string Colombiano::consultarConocimientosString(){
    return "Su cultura es expresiva.\n"
           "No tienen problema frente al contacto visual prolongado.\n"
           "Sus gestos como la expresión 'paila' para decir que se está mal y el señalar con la punta de los labios\n"
           "En cuanto al tacto suelen ser muy abiertos al contacto, sin importar de quién lo reciben.\n"
           "Su perspectiva frente al respeto es que no se respeta mucho el espacio fisico cuando se encuentran personas de confianza.\n"
           "Cuando gestionan el tiempo se obtienen resultados, aunque los metodos de gestion pueden ser ortodoxos.\n"
           "Para hablar tienen una gran velocidad y expresiones propias que emplean muchas comparaciones para darse a entender.\n"
           "Su cultura no tiene siestas.\n"
           "Algunas festividades son: Carnaval de Blancos y Negros, Carnaval de Barranquilla, Feria de Cali.\n";
}

string Colombiano::printNombre(){
    return this->nombrePais;
}

Colombiano::~Colombiano(){

}