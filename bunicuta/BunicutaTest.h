//
// Created by sga on 3/24/22.
//

#ifndef POO_LABORATOR_141_SEMIGRUPA_1_BUNICUTATEST_H
#define POO_LABORATOR_141_SEMIGRUPA_1_BUNICUTATEST_H

#include <iostream>
#include "Forma.h"
#include "FormaPatrat.h"
#include "FormaDreptunghi.h"
#include "FormaCerc.h"
#include <vector>

using namespace std;

class BunicutaTest {

public:
//    void TestAfisare() {
//        Forma forma;
//        forma.SetIntaltime(5);
//        forma.Afisare();
//
//        cout<<endl;
//        FormaPatrat formaPatrat;
//        formaPatrat.SetIntaltime(5);
//        formaPatrat.Afisare();
//    }

//    void TestPointeri() {
//        Forma *forma = new Forma();
//
//        Forma *formaPatrat = new FormaPatrat();
//        formaPatrat->SetIntaltime(5);
//        formaPatrat->Afisare(); cout<<endl;
//        //nu se poate, pentru ca SetLatura nu exista pe baza
////        formaPatrat->SetLatura();
//        // https://en.cppreference.com/w/cpp/language/dynamic_cast
//        if(FormaPatrat *pFormaPatrat = dynamic_cast<FormaPatrat *>(formaPatrat)) {
//            pFormaPatrat->SetLatura(5);
//        }
//        if(FormaPatrat *pFormaPatrat = dynamic_cast<FormaPatrat *>(forma)) {
//            cout << "NU AR TREBUI SA SE AFISEZE";
//        }
//        formaPatrat->Afisare();
//
//        //de ce este util?
////        Forma* toateFormele = new Forma[100];
////        https://en.cppreference.com/w/cpp/container/vector
// //       sau https://www.cplusplus.com/reference/vector/vector/
////        vector<Forma*> toateFormeleVector;
//    }

    void TestCantitateTotalGem() {
        vector<Forma*> toateFormele;

        Forma *forma = new FormaPatrat(2,5);
        toateFormele.push_back(forma);
        forma = new FormaPatrat(1,10);
        toateFormele.push_back(forma);

        forma = new FormaDreptunghi(5, 2, 3);
        toateFormele.push_back(forma);

        forma = new FormaCerc(3,4);
        toateFormele.push_back(forma);
        double suma = 0;
        for(int i=0; i<toateFormele.size(); i++) {
            suma+=toateFormele[i]->CantitateGem();
        }
        cout<<suma;
    }
};


#endif //POO_LABORATOR_141_SEMIGRUPA_1_BUNICUTATEST_H
