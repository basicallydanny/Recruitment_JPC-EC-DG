#include "Frances.h"
///Funcion que si se selecciona la nacionalidad francesa, muestra en pantalla sus caracteriscticas culturales
void Frances::consultarConocimientos(){
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

string Frances::printNombre(){
    return this->nombrePais;
}

string Frances::consultarConocimientosString() {
    return "Su cultura hereda la reputacion de ser un paIs fundador en terminos de protocolo y buenos modales\n"
           "El contacto visual es perfecto para lograr una primera impresion positiva\n"
           "Sus gestos mas notables son cuando se colocan la punta de los cinco dedos juntos y hacia arriba, "
           "le da un acento al discurso y significa que lo que se dice es importante. La mano extendida dirigiendo "
           "la palma hacia e interlocutor, y haciendo movimientos ligeros de derecha a izquierda y viceversa, quiere decir"
           "que rechazas de manera cortes lo que el interlocutor propone.\n"
           "En cuanto al tacto es costumbre saludarse con un apreton de manos firme, pero no en exceso.\n"
           "El saludo habitual entre amigos o familiares es el beso en las mejillas, entre mujeres, o entre hombres y mujeres.\n"
           "Su perspectiva frente al respeto es liberal, motivando a sus receptores a expresarse con total libertad.\n"
           "Gestionan el tiempo de tal manera que comparten una fuerte segmentación del trabajo, por lo cual tienden a recurrir a sus adyacentes para optimizar el resultado final.\n"
           "Para hablar utilizan muchas expresiones figuradas que pueden resultar desconcertantes. Pide que te las expliquen y disfrutara utilizandolas despues.\n"
           "Su cultura tiene siestas.\n"
           "Algunas festividades son:La fiesta de las crepas, la Galette des Rois, Mercados Navidenos.\n";
}

Frances::~Frances() {

}