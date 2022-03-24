//
// Created by sga on 3/24/22.
//

#ifndef POO_LABORATOR_141_SEMIGRUPA_1_FORMAPATRAT_H
#define POO_LABORATOR_141_SEMIGRUPA_1_FORMAPATRAT_H


#include "Forma.h"

class FormaPatrat : public Forma {
    double latura;
public:
    void Afisare();
    void SetLatura(double l) { latura = l; }
};


#endif //POO_LABORATOR_141_SEMIGRUPA_1_FORMAPATRAT_H
