#include "View.h"

View::View(){
}

void View::mostrarMenu(){
    int opcion, pasaporte;
    do{
        cout << "Menu Reclutador\n";
        cout << "1. Consultar los conocimientos culturales\n";
        cout << "2. Crear candidatos\n";
        cout << "3. Programar entrevistas\n";
        cout << "4. Generar guía de entrevistas\n";
        cout << "5. Generar la carta de bienvenida\n";
        cout << "0. Salir \n";
        cout << "Digita el numero: ";
        cin >> opcion;
        switch (opcion){
            case 1:
                reclutador.consultarConocimientos();
                break;
            case 2:
                reclutador.crearCandidato();
                break;
            case 3:
                cout << "Ingrese el pasaporte del candidato: " << endl;
                cin >> pasaporte;
                reclutador.agendarEntrevistas(pasaporte);
                break;
            case 4:
                cout << "Ingrese el pasaporte del candidato: " << endl;
                cin >> pasaporte;
                reclutador.generarGuia(pasaporte);
                break;
            case 5:
                reclutador.generarCarta(pasaporte);
                break;
        }
    } while (opcion != 0);
}