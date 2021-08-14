//
//  main.cpp
//  6.14(Rounding_numbers)
//
//  Created by Sabuhi Ibrahimov on 18.01.21.
//

#include <iostream>
#include <iomanip>
#include <cmath>

double roundToInteger( double );
double roundToTenths( double );
double roundToHundredths( double );
double roundToThousandths( double );



int main() {
    double number1 = 0;
    std::cout << "Enter number: ";
    std::cin >> number1;
    
    double number2 = 0;
    std::cout << "Enter number: ";
    std::cin >> number2;
    
    double number3 = 0;
    std::cout << "Enter number: ";
    std::cin >> number3;
    std::cout << std::setprecision(6) << std::fixed;
    
    
    std::cout << "\n\n" << std::setw(20) << std:: left << "Original" <<
    std::setw(20) << std:: left << "Round to integer" <<
    std::setw(20) << std:: left << "Round to tenths" <<
    std::setw(20) << std:: left << "Round to hundredths" <<
    std::setw(20) << std:: left << "Round to thousandths" << std::endl;
    
    
    std::cout << std::setw(20) << std::left << number1 <<
    std::setw(20) << std::left << roundToInteger(number1) <<
    std::setw(20) << std:: left << roundToTenths(number1) <<
    std::setw(20) << std:: left << roundToHundredths(number1) <<
    std::setw(20) << std:: left << roundToThousandths(number1) << std::endl;
    
    std::cout << std::setw(20) << std::left << number2 <<
    std::setw(20) << std:: left << roundToInteger(number2) <<
    std::setw(20) << std:: left << roundToTenths(number2) <<
    std::setw(20) << std:: left << roundToHundredths(number2) <<
    std::setw(20) << std:: left << roundToThousandths(number2) << std::endl;
    
    std::cout << std::setw(20) << std::left << number3 <<
    std::setw(20) << std:: left << roundToInteger(number3) <<
    std::setw(20) << std:: left << roundToTenths(number3) <<
    std::setw(20) << std:: left << roundToHundredths(number3) <<
    std::setw(20) << std:: left << roundToThousandths(number3) << "\n" << std::endl;
}

double roundToInteger( double number ){
    number = floor(number + 0.5);
    return number;
}
double roundToTenths( double number ){
    number = floor(number * 10 + 0.5)/10;
    return number;
}
double roundToHundredths( double number ){
    number = floor(number * 100 + 0.5)/100;
    return number;
}
double roundToThousandths( double number ){
    number = floor(number * 1000 + 0.5)/1000;
    return number;
}
