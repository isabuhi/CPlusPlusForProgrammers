//
//  main.cpp
//  6.11(Show_value)
//
//  Created by Sabuhi Ibrahimov on 15.01.21.
//

#include <iostream>
#include <cmath>

int main() {
    double x = 0;
    
    x = fabs(7.5);
    std::cout << x << std::endl;
    x = floor(7.5);
    std::cout << x << std::endl;
    x = fabs(0.0);
    std::cout << x << std::endl;
    x = ceil(0.0);
    std::cout << x << std::endl;
    x = fabs(-6.4);
    std::cout << x << std::endl;
    x = ceil(-6.4);
    std::cout << x << std::endl;
    x = ceil(-fabs(-8 + floor(-5.5)));
    std::cout << x << std::endl;
}
