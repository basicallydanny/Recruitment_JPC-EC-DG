#ifndef RECRUITMENT_JPC_EC_DG_VIEW_H
#define RECRUITMENT_JPC_EC_DG_VIEW_H

#include <iostream>
#include <stdlib.h>
#include "../Model/Reclutador.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

class View{
private:
    Reclutador Jairo;
public:
    View();
    void mostrarMenu();
};

#endif //RECRUITMENT_JPC_EC_DG_VIEW_H
