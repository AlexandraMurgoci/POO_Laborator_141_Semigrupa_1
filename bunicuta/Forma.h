//
// Created by sga on 3/24/22.
//

#ifndef POO_LABORATOR_141_SEMIGRUPA_1_FORMA_H
#define POO_LABORATOR_141_SEMIGRUPA_1_FORMA_H

#include <iostream>
using namespace std;

class Forma {
protected:
    double inaltime;
public:
//    virtual double CantitateGem()=0;
    void SetIntaltime(double h) { inaltime = h; }
    //daca nu este virtual, un pointer la forma * ce contine un copil (exp FormaPatrat)
    //va apela metoda din baza, nu din copil
    virtual void Afisare();
};


#endif //POO_LABORATOR_141_SEMIGRUPA_1_FORMA_H
