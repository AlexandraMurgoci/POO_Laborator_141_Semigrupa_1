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
private:
    virtual double AriaBazei()=0;
    virtual double Volum();
public:
    Forma(): inaltime(0) {}
    Forma(double h): inaltime(h){}
    virtual double CantitateGem();
    void SetIntaltime(double h) { inaltime = h; }
    //daca nu este virtual, un pointer la forma * ce contine un copil (exp FormaPatrat)
    //va apela metoda din baza, nu din copil
    virtual void Afisare();
};


#endif //POO_LABORATOR_141_SEMIGRUPA_1_FORMA_H
