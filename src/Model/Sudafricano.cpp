#include "Sudafricano.h"
///Funcion que si se selecciona la nacionalidad sudafricana, muestra en pantalla sus caracteriscticas culturales
void Sudafricano::consultarConocimientos(){
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

string Sudafricano::consultarConocimientosString(){
    return "Su cultura se destaca por su diversidad étnica y cultural. Por lo tanto, no existe una unica cultura de Sudafrica. Preguntale sobre su propia experiencia.\n"
           "El contacto visual directo es frecuente, aunque mantener la mirada fija por largo tiempo podría ser considerado retador.\n"
           "Se saluda con un apreton de manos, con una sonrisa y mirando a los ojos, y se saluda primero a la persona de mayor jerarquia.\n"
           "En cuanto al tacto el espacio personal es reducido. Al conversar es común que las personas se encuentren físicamente cerca, en ocasiones hombro con hombro.\n"
           "Su perspectiva frente al respeto depende de quien signifique esa persona para ti.\n"
           "Cuando gestionan el tiempo respetan mucho el tiempo que tiene cada cosa en su dia a dia.\n"
           "Para hablar depende muchas veces de su region, por lo que esto hace que varien las lenguas habladas.\n"
           "Su cultura si tiene siestas.\n"
           "Algunas festividades son: Fin del apartheid, festivales de rock y jazz, dia de la diversidad.\n";
}

string Sudafricano::printNombre(){
    return this->nombrePais;
}

Sudafricano::~Sudafricano(){

}