#include "View.h"

View::View(){
}

void View::mostrarMenu(){
    int opcion;
    do{
        cout << "Menu Reclutador\n";
        cout << "1. Consultar los conocimientos culturales\n";
        cout << "2. Crear candidatos\n";
        cout << "3. Programar entrevistas\n";
        cout << "4. Generar guía de entrevistas\n";
        cout << "5. Generar la carta de bienvenida\n";
        cout << "0. Salir \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;
        switch (opcion){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
        }
    } while (opcion != 0);
}