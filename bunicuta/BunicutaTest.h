//
// Created by sga on 3/24/22.
//

#ifndef POO_LABORATOR_141_SEMIGRUPA_1_BUNICUTATEST_H
#define POO_LABORATOR_141_SEMIGRUPA_1_BUNICUTATEST_H

#include <iostream>
#include "Forma.h"
#include "FormaPatrat.h"
#include <vector>

using namespace std;

class BunicutaTest {

public:
    void TestAfisare() {
        Forma forma;
        forma.SetIntaltime(5);
        forma.Afisare();

        cout<<endl;
        FormaPatrat formaPatrat;
        formaPatrat.SetIntaltime(5);
        formaPatrat.Afisare();
    }

    void TestPointeri() {
        Forma *forma = new Forma();

        Forma *formaPatrat = new FormaPatrat();
        formaPatrat->SetIntaltime(5);
        formaPatrat->Afisare(); cout<<endl;
        //nu se poate, pentru ca SetLatura nu exista pe baza
//        formaPatrat->SetLatura();
        // https://en.cppreference.com/w/cpp/language/dynamic_cast
        if(FormaPatrat *pFormaPatrat = dynamic_cast<FormaPatrat *>(formaPatrat)) {
            pFormaPatrat->SetLatura(5);
        }
        if(FormaPatrat *pFormaPatrat = dynamic_cast<FormaPatrat *>(forma)) {
            cout << "NU AR TREBUI SA SE AFISEZE";
        }
        formaPatrat->Afisare();

        //de ce este util?
//        Forma* toateFormele = new Forma[100];
//        https://en.cppreference.com/w/cpp/container/vector
//        vector<Forma*> toateFormeleVector;
    }

    void TestCantitateTotalGem() {
        int numarForme = 3;
        vector<Forma*> toateFormele;
        double suma = 0;
        for(int i=0; i<numarForme; i++) {
            suma+=toateFormele[i]->CantitateGem();
        }
        cout<<suma;
    }
};


#endif //POO_LABORATOR_141_SEMIGRUPA_1_BUNICUTATEST_H
