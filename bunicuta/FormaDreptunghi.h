//
// Created by sga on 3/25/22.
//

#ifndef POO_LABORATOR_141_SEMIGRUPA_1_FORMADREPTUNGHI_H
#define POO_LABORATOR_141_SEMIGRUPA_1_FORMADREPTUNGHI_H

/*
 * Hanghicel Razvan-Mihai, Horceag Andrei Cristian, Moisii Lucian
 */

#include "Forma.h"

class FormaDreptunghi: public Forma {
    double latura_mica;
    double latura_mare;
    double AriaBazei();

public:

    FormaDreptunghi(): Forma(), latura_mica(0), latura_mare(0){}
    FormaDreptunghi(double h, double l_mica, double l_mare): Forma(h), latura_mare(l_mare), latura_mica(l_mica){}
    void Afisare();
    void SetLaturaMica(double l) {
        latura_mica = l;
    }
    void SetLaturaMare(double l)
    {
        latura_mare = l;
    }
};


#endif //POO_LABORATOR_141_SEMIGRUPA_1_FORMADREPTUNGHI_H
