//
// Created by sga on 3/25/22.
//

#include "FormaCerc.h"

void FormaCerc::Afisare(){
    cout<<"Forma Cerc: inaltime "<< inaltime <<" raza "<<raza;
}

double FormaCerc::AriaBazei(){
    return 3.14*raza*raza;
}