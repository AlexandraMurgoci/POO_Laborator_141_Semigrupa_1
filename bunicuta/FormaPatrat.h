//
// Created by sga on 3/24/22.
//

#ifndef POO_LABORATOR_141_SEMIGRUPA_1_FORMAPATRAT_H
#define POO_LABORATOR_141_SEMIGRUPA_1_FORMAPATRAT_H


#include "Forma.h"

class FormaPatrat : public Forma {
    double latura;
    double AriaBazei();
public:
    FormaPatrat():Forma(),latura(0){}
    FormaPatrat(double h, double l):Forma(h),latura(l) {}
    void Afisare();
    void SetLatura(double l) { latura = l; }
    void CantinateGem() {}
};


#endif //POO_LABORATOR_141_SEMIGRUPA_1_FORMAPATRAT_H
