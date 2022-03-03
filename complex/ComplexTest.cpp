//
// Created by sga on 3/3/22.
//

#include "ComplexTest.h"

void ComplexTest::TestConstructorWithoutParameters() {
    Complex c;
    if(c.GetReal() == 0 && c.GetImaginary() == 0) {
        cout << "TestConstructorWithoutParameters: OK";
    }
    else {
        cout << "TestConstructorWithoutParameters: KO";
    }
}