//
//  main.cpp
//  9.5(Complex_Class)
//
//  Created by Sabuhi Ibrahimov on 20.06.21.
//

#include <iostream>
#include "complex.hpp"


int main() {
    COMPLEX c1{3, 4};
    COMPLEX c2{5, 6};
    adding(c1, c2);
    subtracting(c1, c2);
}


void adding(const COMPLEX & c1, const COMPLEX & c2){
    std::cout <<"Adding - (" <<c1.realPart + c2.realPart << ", " << c1.imaginaryPart + c2.imaginaryPart << ")" <<std::endl;
}
void subtracting(const COMPLEX & c1, const COMPLEX & c2){
    std::cout <<"Subtracting - (" <<c1.realPart - c2.realPart << ", " << c1.imaginaryPart - c2.imaginaryPart << ")" <<std::endl;
}
