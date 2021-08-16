//
//  main.cpp
//  7.11(One-Dimensional_array_Questions)
//
//  Created by Sabuhi Ibrahimov on 05.03.21.
//

#include <iostream>
#include <array>

int main() {
//  a) Initialize the 10 elements of integer array counts to zero.
    std::array<int, 10> counts = {0,0,0,0,0,0,0,0,0,0};
//  b) Add 1 to each of the 15 elements of integer array bonus.
    std::array<int, 10> bonus;
    for (int &item: bonus)
        item = 1;
//  c) Read 12 values for the array of doubles named monthlyTemperatures from the keyboard.
    std::array<double, 12> monthlyTemperatures;
    for (double &month: monthlyTemperatures) {
        std::cin >> month;
    }
}
