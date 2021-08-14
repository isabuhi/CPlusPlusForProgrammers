//
//  main.cpp
//  6.12(Parking_charges)
//
//  Created by Sabuhi Ibrahimov on 15.01.21.
//

#include <iostream>
#include <iomanip>
double calculateCharges (double);

int main() {
    double hour1 = 0;
    
    std::cout << "Enter parking hours: ";
    
    std::cin >> hour1;
    
    double hour2 = 0;
    
    std::cout << "Enter parking hours: ";
    
    std::cin >> hour2;
    
    double hour3 = 0;
    
    std::cout << "Enter parking hours: " << std::endl;
    
    std::cin >> hour3;
    
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "\n\nCar" << std::setw(9) << std::right << "Hours" << std::setw(9) << std::right << "Charge" << std::endl;
    
    std::cout << 1 << std::setw(11) << std::right << hour1 << std::setw(9) << std::right << calculateCharges(hour1) << std::endl;
    std::cout << 2 << std::setw(11) << std::right << hour2 << std::setw(9) << std::right << calculateCharges(hour2) << std::endl;
    std::cout << 3 << std::setw(11) << std::right << hour3 << std::setw(9) << std::right << calculateCharges(hour3) << std::endl;
    std::cout << "Total" << std::setw(7) << std::right << hour3 + hour1 + hour2 << std::setw(9) << std::right << calculateCharges(hour3) + calculateCharges(hour2) + calculateCharges(hour1) << std::endl;
}

double calculateCharges (double hours){
    double charge = 0;
    if (hours <= 3 && hours > 0){
        charge = 2;
    }
    else if (hours > 3 && hours < 24) {
        charge = 2 + (hours - 3) * 0.5;
    }
    else if (hours == 24)
        charge = 10;
    else
        charge = 0;
    
    
    return charge;
}
