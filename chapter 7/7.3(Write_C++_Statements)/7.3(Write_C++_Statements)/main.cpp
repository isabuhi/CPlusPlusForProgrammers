//
//  main.cpp
//  7.3(Write_C++_Statements)
//
//  Created by Sabuhi Ibrahimov on 25.02.21.
//

#include <iostream>
#include <array>
#include <iomanip>
int main() {
// a)
    const size_t arraySize = 10;
// b)
    std::array<double, arraySize> arr;
// c)
    arr[3];
// d)
    arr[4];
// e)
    arr[9] = 1.667;
// f)
    arr[6] = 3.333;
// g)
    std::cout << std::setprecision(2) << std::fixed <<
    arr[5] << " " << arr[8] << "\n\n";
// h)
    for(int i = 0; i < arr.size(); ++i)
        std::cout << arr[i] << "\n";
    std::cout << "\n";
    
// i)
    for(double items : arr)
        std::cout << items << " ";
    
    std::cout << std::endl;
}
