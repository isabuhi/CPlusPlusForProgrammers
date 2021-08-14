//
//  complex.cpp
//  9.5(Complex_Class)
//
//  Created by Sabuhi Ibrahimov on 20.06.21.
//

#include <iostream>
#include "complex.hpp"


COMPLEX :: COMPLEX (double real, double imaginary)
:realPart(real),
imaginaryPart(imaginary)
{
}
void COMPLEX::getComplex () const {
    std::cout <<"(" << realPart << ", " << imaginaryPart << ")" <<std::endl;
}
