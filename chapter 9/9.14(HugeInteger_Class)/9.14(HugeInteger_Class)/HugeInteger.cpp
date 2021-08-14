//
//  HugeInteger.cpp
//  9.14(HugeInteger_Class)
//
//  Created by Sabuhi Ibrahimov on 07.07.21.
//

#include <iostream>
#include "HugeInteger.hpp"


HugeInteger::HugeInteger(const int * m, int c)
{

    for(int & col: hugeInteger)
        col = 10;
    for (int i = 0; i < c; ++i)
        hugeInteger[i] = m[i];
}

void HugeInteger::set(){
    hugeInteger= {5};
}

void HugeInteger::output() const {
    for(int i = 0; i< hugeInteger.size(); ++i){
        std::cout << hugeInteger[i];
    }
}

