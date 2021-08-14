//
//  main.cpp
//  8.9(Write_C++_Statements)
//
//  Created by Sabuhi Ibrahimov on 26.05.21.
//

#include <iostream>

int main() {
    long value1 = 200000;
    long value2;
    
    // a) Declare the variable longPtr to be a pointer to an object of type long.
    long *longPtr;
    
    // b) Assign the address of variable value1 to pointer variable longPtr.
    longPtr = &value1;

    // c) Display the value of the object pointed to by longPtr.
    std::cout << *longPtr << std::endl;
    
    // d) Assign the value of the object pointed to by longPtr to variable value2.
    value2 = *longPtr;
    
    // e) Display the value of value2.
    std::cout << value2 << std::endl;
    
    // f) Display the address of value1.
    std::cout << &value1 << std::endl;
    
    // g) Display the address stored in longPtr. Is the address displayed the same as value1’s?
    std::cout << longPtr << std::endl;
}
