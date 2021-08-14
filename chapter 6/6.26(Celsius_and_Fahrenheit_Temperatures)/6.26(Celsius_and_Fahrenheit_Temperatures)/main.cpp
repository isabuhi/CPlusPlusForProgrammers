//
//  main.cpp
//  6.26(Celsius_and_Fahrenheit_Temperatures)
//
//  Created by Sabuhi Ibrahimov on 24.01.21.
//

#include <iostream>
#include <iomanip>
int farenheitToCelsius(int farenheit){
    return (farenheit - 32) * 5/9;
}

int celsiusToFarenheit(int celsius){
    return (celsius * 9/5) + 32;
}

int main() {
    std::cout << "Fahrenheit equivalents of all Celsius temperatures from 0 to 100: " << std::endl;
    for (unsigned int i = 1; i <= 100; ++i){
        std::cout << std::setw(5) << std::left << celsiusToFarenheit(i);
        if (i % 5 == 0)
            std::cout <<"\n";
    }
    
    std::cout << "\n";
    
    std::cout << "Celsius equivalents of all Fahrenheit temperatures from 32 to 212: " << std::endl;
    for (unsigned int i = 32; i <= 212; ++i){
        std::cout << std::setw(5) << std::left << farenheitToCelsius(i);
        if ((i - 31) % 5 == 0)
            std::cout <<"\n";
    }
    
    std::cout << std::endl;
}


