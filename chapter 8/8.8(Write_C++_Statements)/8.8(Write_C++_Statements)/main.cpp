//
//  main.cpp
//  8.8(Write_C++_Statements)
//
//  Created by Sabuhi Ibrahimov on 26.05.21.
//

#include <iostream>

int main() {
    const size_t SIZE = 5;
    
    // a) Declare a built-in array of type unsigned int called values with five elements, and initialize the elements to the even integers from 2 to 10. Assume that the constant SIZE has been defined as 5.
    unsigned int values[SIZE] = {2, 4, 6, 8, 10};
    
    // b) Declare a pointer vPtr that points to an object of type unsigned int.
    unsigned int *vPtr = nullptr;
    
    // c) Use a for statement to display the elements of built-in array values using array subscript notation.
    for(size_t i = 0; i < SIZE; ++i){
        std::cout << values[i] << " ";
    }
    std::cout << std::endl;
    
    // d) Write two separate statements that assign the starting address of built-in array values to pointer variable vPtr.
    vPtr = values;
    vPtr = &values[0];
    
    // e) Use a for statement to display the elements of built-in array values using pointer/offset notation.
    for(size_t i = 0; i < SIZE; ++i){
        std::cout << *(vPtr + i) << " ";
    }
    std::cout << std::endl;
    
    // f) Use a for statement to display the elements of built-in array values using pointer/offset notation with the built-in array’s name as the pointer.
    for(size_t i = 0; i < SIZE; ++i){
        std::cout << *(values + i) << " ";
    }
    std::cout << std::endl;
    
    // g) Use a for statement to display the elements of built-in array values by subscripting the pointer to the built-in array.
    for(size_t i = 0; i < SIZE; ++i){
        std::cout << vPtr[i] << " ";
    }
    std::cout << std::endl;
    
    // f) Refer to the fifth element of values using array subscript notation, pointer/offset notation with the built-in array name’s as the pointer, pointer subscript notation and pointer/offset notation.
    values[4];
    *(values + 4);
    vPtr[4];
    *(vPtr + 4);
    
    // i) What address is referenced by vPtr + 3? What value is stored at that location?
    std::cout << vPtr + 3 << " " << *(vPtr + 3) <<std::endl;
    
    // j) Assuming that vPtr points to values[ 4 ], what address is referenced by vPtr -= 4? What value is stored at that location?
    vPtr += 4;
    vPtr -= 4;
    std::cout << vPtr << " " << *vPtr << std::endl;
}
