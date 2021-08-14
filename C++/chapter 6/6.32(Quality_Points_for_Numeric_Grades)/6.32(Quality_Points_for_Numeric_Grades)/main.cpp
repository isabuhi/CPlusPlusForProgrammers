//
//  main.cpp
//  6.32(Quality_Points_for_Numeric_Grades)
//
//  Created by Sabuhi Ibrahimov on 26.01.21.
//

#include <iostream>
int qualityPoints(int average){
    switch (average / 10) {
        case 9:
        case 10:
            return 4;
        case 8:
            return 3;
        case 7:
            return 2;
        case 6:
            return 1;
        default:
            return 0;
    }
}


int main() {
    int average = 0;
    std::cout << "Enter average: ";
    std::cin >> average;
    std::cout << "Quality point: " << qualityPoints(average);
    std::cout << std::endl;
}
