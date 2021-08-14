//
//  main.cpp
//  ex_8.3
//
//  Created by Sabuhi Ibrahimov on 18.05.21.
//

#include <iostream>
#include <iomanip>

int main() {
    // a) Declare a built-in array of type double called numbers with 10 elements, and initialize the elements to the values 0.0, 1.1, 2.2, ..., 9.9. Assume that the constant size has been defined as 10.
    double numbers[10] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
    
    // b) Declare a pointer nPtr that points to a variable of type double.
    double *nPtr = nullptr;
    
    // c) Use a for statement to display the elements of built-in array numbers using array sub-script notation. Display each number with one digit to the right of the decimal point.
    for(size_t i = 0; i < 10; ++i){
        std::cout << std::fixed << std::setprecision(1) << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    // d) Write two separate statements that each assign the starting address of built-in array numbers to the pointer variable nPtr.
    nPtr = numbers;
    nPtr = &numbers[0];
    
    // e) Use a for statement to display the elements of built-in array numbers using pointer/offset notation with pointer nPtr.
    
    for(size_t i = 0; i < 10; ++i) {
        std::cout << std::fixed << std::setprecision(1) << *(nPtr +i) << " ";
    }
    std::cout << std::endl;
    
    // f) Use a for statement to display the elements of built-in array numbers using pointer/offset notation with the built-in array’s name as the pointer.
    for(size_t i = 0; i < 10; ++i) {
        std::cout << std::fixed << std::setprecision(1) << *(numbers +i) << " ";
    }
    std::cout << std::endl;
    
    // g) Use a for statement to display the elements of built-in array numbers using pointer/subscript notation with pointer nPtr.
    for(size_t i = 0; i < 10; ++i) {
        std::cout << std::fixed << std::setprecision(1) << nPtr[i] << " ";
    }
    std::cout << std::endl;
    
    // h) Refer to the fourth element of built-in array numbers using array subscript notation, pointer/offset notation with the built-in array’s name as the pointer, pointer subscript notation with nPtr and pointer/offset notation with nPtr.
    
    numbers[3];
    *(numbers + 3);
    nPtr[3];
    *(nPtr + 3);
    
    // i) Assuming that nPtr points to the beginning of built-in array numbers, what address is referenced by nPtr + 8? What value is stored at that location?
    
    std::cout << *(nPtr + 8) << std::endl;
    
    // j) Assuming that nPtr points to numbers[5], what address is referenced by nPtr after nPtr -= 4 is executed? What’s the value stored at that location?
    nPtr += 5;
    nPtr -= 4;
    std::cout << *nPtr << std::endl;
    
}
