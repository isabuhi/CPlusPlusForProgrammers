//
//  main.cpp
//  6.13(Rounding_numbers)
//
//  Created by Sabuhi Ibrahimov on 16.01.21.
//

#include <iostream>
#include <iomanip>
double roundNumber(double);
int main() {
    double number1;
    std::cout << "Enter number: ";
    std::cin >> number1;
    double number2;
    std::cout << "Enter number: ";
    std::cin >> number2;
    double number3;
    std::cout << "Enter number: ";
    std::cin >> number3;
    
    
    std::cout << "\n\n" << std::setw(15) << std::left<<"Original" << std::setw(30) << std::left << "Rounded" << std::endl;
    std::cout << std::setw(15) << std::left << number1 << std::setw(30) << std::left << roundNumber(number1) << std::endl;
    std::cout << std::setw(15) << std::left << number2 << std::setw(30) << std::left << roundNumber(number2) << std::endl;
    std::cout << std::setw(15) << std::left << number3 << std::setw(30) << std::left << roundNumber(number3) << std::endl;
    
}


double roundNumber(double number) {
    double roundedNumber = 0;
    
    roundedNumber = floor(number + 0.5);
    return  roundedNumber;
}
