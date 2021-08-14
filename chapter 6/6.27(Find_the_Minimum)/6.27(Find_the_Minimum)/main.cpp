//
//  main.cpp
//  6.27(Find_the_Minimum)
//
//  Created by Sabuhi Ibrahimov on 24.01.21.
//

#include <iostream>
double minimum(double a, double b, double c){
    double d = a;
    if (d > b)
        d = b;
    if (d > c)
        d = c;
    return d;
}
int main() {
    double a, b, c = 0;
    
    std::cout << "Enter three float numbers: ";
    std::cin >> a >> b >> c;
    std::cout << "\nSmallest float number is " << minimum(a, b, c) << "\n" << std::endl;
}
