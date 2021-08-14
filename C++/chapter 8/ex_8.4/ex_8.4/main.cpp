//
//  main.cpp
//  ex_8.4
//
//  Created by Sabuhi Ibrahimov on 22.05.21.
//

#include <iostream>

int main() {
    double number1 = 7.3;
    double number2;
    
    // a) Declare the variable fPtr to be a pointer to an object of type double and initialize the pointer to nullptr.
    double *fPtr = nullptr;
    
    //b) Assign the address of variable number1 to pointer variablef Ptr.
    fPtr = &number1;
    
    //c) Display the value of the object pointed to by fPtr.
    std::cout << *fPtr << std::endl;
    
    // d) Assign the value of the object pointed to by fPtr to variable number2.
    number2 = *fPtr;
    
    // e) Display the value of number2.
    std::cout << number2 << std::endl;
    
    // f) Display the address of number1.
    std::cout << &number1 << std::endl;
    
    // g) Display the address stored in fPtr. Is the address displayed the same as that of number1?
    std::cout << fPtr << std::endl;
}
