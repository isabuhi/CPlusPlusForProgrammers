//
//  main.cpp
//  6.20(Multiples)
//
//  Created by Sabuhi Ibrahimov on 21.01.21.
//

#include <iostream>
#include <cmath>

bool multiple(int, int);

int main() {
    int trigger = 1;
    std::string _true = "true";
    std::string _false = "false";
    while (trigger != 0){
        if (trigger == 1){
            int x = 0;
            int y = 0;
            std::cout << "Enter factor: ";
            std::cin >> x;
            std::cout << "Enter multiple: ";
            std::cin >> y;
            std::cout << "\nAnswer: " << (multiple(x, y) ? "true" : "false") << "\n\n\n";
        }
        std::cout << "Enter 1 for continue or enter 0 end program: ";
        std::cin >> trigger;
        std::cout << std::endl;
    }
}

bool multiple(int factor, int multiple){
    if (factor == 0){
        if (multiple == 0)
            return true;
    }
    if (fabs(factor) == 1)
        return true;
    if (fabs(factor) == fabs(multiple))
        return true;
    if (fabs(factor) > fabs(multiple))
        return false;
    if (fmod(fabs(multiple),fabs(factor)) == 0)
        return true;
    else
        return false;
}
