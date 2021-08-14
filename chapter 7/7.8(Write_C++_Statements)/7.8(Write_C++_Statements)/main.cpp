//
//  main.cpp
//  7.8(Write_C++_Statements)
//
//  Created by Sabuhi Ibrahimov on 02.03.21.
//

#include <iostream>
#include <array>
#include <iomanip>
int main() {
// a) Display the value of element 6 of character array alphabet.
    std::array <char, 10>alphabet = {'r', 'f','r', 'f','r', 'f','g' };
    std::cout << alphabet[6] << std::endl;
    
// b) Input a value into element 4 of one-dimensional floating-point array grades.
    std::array<double, 10> grades;
    std::cout << "Input value: ";
    std::cin >> grades[4];
    std::cout << grades[4] << std::endl;
    
// c) Initialize each of the 5 elements of one-dimensional integer array values to 8.
    std::array<int, 5> values;
    for (int &value: values)
        value = 8;

    
// d) Total and display the elements of floating-point array temperatures of 100 elements.
    std::array<double, 100> temperatures;
    double add = 0;
    for(double &celcies : temperatures){
        celcies = add;
        ++add;
        std::cout << celcies <<std::endl;
    }
    double total = 0;
    
    
    
    for(int i = 1; i <= 100; ++i){
        total += i;
        
    }
    std::cout << total << std::endl;
    
// e) Copy array a into the first portion of array b. Assume that both arrays contain doubles and that arrays a and b have 11 and 34 elements, respectively.
    std::array<double, 11> a = {2,4,23,3,4.54,4,6,9,2,5,5};
    std::array<double, 34> b;
    for(size_t i = 0; i < 11; ++i)
    b[i] = a[i];
    for (double items : b)
        std::cout << items << std::endl;
}
