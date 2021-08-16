//
//  main.cpp
//  6.19(Hypotenuse_Calculations)
//
//  Created by Sabuhi Ibrahimov on 19.01.21.
//

#include <iostream>
#include <cmath>
#include <iomanip>


double hypotenuse(double, double);
int main() {
    std::cout << std::setw(5) << std::left << "1" << hypotenuse(3, 4) << "\n";
    std::cout << std::setw(5) << std::left << "2" << hypotenuse(5, 12) << "\n";
    std::cout << std::setw(5) << std::left << "3" << hypotenuse(8, 15) << "\n" << std::endl;;
}


double hypotenuse(double side1, double side2){
    return sqrt(pow(side1, 2) + pow(side2, 2));
}
