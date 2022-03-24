//
// Created by sga on 3/24/22.
//

#include "FormaPatrat.h"

void FormaPatrat::Afisare() {
    cout << "FormaPatrat: inaltime " << inaltime << " latura " << latura;
}

double FormaPatrat::AriaBazei() {
    return latura * latura;
}