//
//  main.cpp
//  ex_6.10
//
//  Created by Sabuhi Ibrahimov on 14.01.21.
//

#include <iostream>
#include <cmath>

inline void sphereVolume(){
    int radius = 0;
    std::cout << "Enter radius of sphere: " << std::endl;
    std::cin >> radius;
    std::cout << "Volume of sphere is " << 4.0 / 3.0 * 3.14159 * pow(radius, 3) << std::endl;
}
int main() {
    
    sphereVolume();
    
}

