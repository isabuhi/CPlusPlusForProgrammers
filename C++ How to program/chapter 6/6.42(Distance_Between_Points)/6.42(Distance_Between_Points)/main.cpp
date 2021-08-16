//
//  main.cpp
//  6.42(Distance_Between_Points)
//
//  Created by Sabuhi Ibrahimov on 12.02.21.
//

#include <iostream>
#include <cmath>
void distance(){
    double x1, x2, y1, y2 = 0;
    std::cout << "First point: ";
    std::cin >> x1 >> y1;
    std::cout << "Second point: ";
    std::cin >> x2 >> y2;
    std::cout << "Distance: " << sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2)) << std::endl;
}
int main(int argc, const char * argv[]) {
    distance();
}
