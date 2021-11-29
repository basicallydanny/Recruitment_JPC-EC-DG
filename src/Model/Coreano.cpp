#include "Coreano.h"
///Funcion que si se selecciona la nacionalidad coreana, muestra en pantalla sus caracteriscticas culturales
void Coreano::consultarConocimientos(){
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

string Coreano::consultarConocimientosString(){
    return "Su cultura es muy reconocida en los paises del extremo oriente, especialmente en los ámbitos del entretenimiento como el cine, las series de televisión y la música pop.\n"
           "Suelen evitar el contacto visual como forma de respeto a sus superiores.\n"
           "Uno de sus gestos es llamar a las personas con la palma de la mano hacia abajo.\n"
           "En cuanto al tacto no es habitual ni cortes dar la mano ya que existe un gran respeto por el espacio personal (con lo cual tampoco hay que mostrar afecto fisico con personas poco conocidas).\n"
           "Su perspectiva frente al respeto es predominante al tenerse en gran consideración la jerarquia, ya sea por edad o titulo profesional..\n"
           "Cuando gestionan el tiempo tienen muy en cuenta la puntualidad y suelen llegar antes de lo previsto. La tardanza es vista como una falta de respeto.\n"
           "Para hablar no gesticular demasiado ni hablan en voz muy alta ya que aprecian la armonía y tranquilidad.\n"
           "Su cultura no tiene siestas.\n"
           "Algunas festividades son: Yeonggo, Dongmaeng, Muncheon.\n";

}

string Coreano::printNombre(){
    return this->nombrePais;
}

Coreano::~Coreano() {

}