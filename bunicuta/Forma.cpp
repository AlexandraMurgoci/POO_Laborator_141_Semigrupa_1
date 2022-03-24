//
// Created by sga on 3/24/22.
//

#include "Forma.h"

void Forma::Afisare() {
    cout << "Forma: " << inaltime;
}

double Forma::Volum() {
    return inaltime * AriaBazei();
}

double Forma::CantitateGem() {
    return 2 * Volum();
}
