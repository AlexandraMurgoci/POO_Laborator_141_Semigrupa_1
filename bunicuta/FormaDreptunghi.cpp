//
// Created by sga on 3/25/22.
//

#include "FormaDreptunghi.h"
void FormaDreptunghi::Afisare(){
    cout<<"FormaDreptunghi: inaltime "<<inaltime<<", latura mica"<<latura_mica<<", latura_mare"<<latura_mare<<endl;
}

double FormaDreptunghi::AriaBazei(){
    return latura_mica*latura_mare;
}
