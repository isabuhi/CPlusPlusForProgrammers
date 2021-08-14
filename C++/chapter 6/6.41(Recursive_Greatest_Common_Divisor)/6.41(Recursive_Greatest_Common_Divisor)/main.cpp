//
//  main.cpp
//  6.41(Recursive_Greatest_Common_Divisor)
//
//  Created by Sabuhi Ibrahimov on 12.02.21.
//

#include <iostream>

int gcd(int x, int y){
    if(y == 0){
        return x;
    }
    else{
        return gcd(y, y % x);
    }
}


int main(int argc, const char * argv[]) {
    std::cout << gcd(6, 3) << std::endl;
}
