//
// Created by sga on 3/25/22.
//

#ifndef POO_LABORATOR_141_SEMIGRUPA_1_FORMACERC_H
#define POO_LABORATOR_141_SEMIGRUPA_1_FORMACERC_H

/*
 * Melania Ion, Patricia Paralescu, Olaeriu Vlad
 */

#include "Forma.h"

class FormaCerc : public Forma{
    double raza;
    double AriaBazei();
public:
    FormaCerc():Forma(),raza(0){}
    FormaCerc(double h, double r):Forma(h),raza(r){}
    void Afisare();
    void SetRaza(double r){ raza = r;}
};


#endif //POO_LABORATOR_141_SEMIGRUPA_1_FORMACERC_H
