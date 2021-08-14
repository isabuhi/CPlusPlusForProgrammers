//
//  main.cpp
//  9.6(Rational_Class)
//
//  Created by Sabuhi Ibrahimov on 21.06.21.
//

#include <iostream>
#include "rational.hpp"


int main() {
    Rational r1(9, 21);
    Rational r2(4, 6);
    
    r1.divide(r2);
    
    r1.getRasional();
    r1.getfloat();
    
    r2 =r1;
    
    r2.getRasional();
    r2.getfloat();
}
