//
//  main.cpp
//  7.4(Two-Dimensional_array_Questions)
//
//  Created by Sabuhi Ibrahimov on 25.02.21.
//

#include <iostream>
#include <array>
#include <iomanip>

int main() {
// a)
    const size_t arraySize = 3;
    std::array<std::array<int, arraySize>, arraySize> table;
    
    for(size_t i = 0; i < table.size(); ++i){
        for(size_t j = 0; j < table[i].size(); ++j)
        table[i][j] = i + j;
    }
    
    std::cout << "    [0] [1] [2]" << std::endl;
    for(size_t i = 0; i < table.size(); ++i){
        std::cout << "[" << i << "]";
        for(size_t j = 0; j < table[i].size(); ++j)
        std::cout << std::setw(3) << table[i][j] << " ";
        std::cout << std::endl;
    }
    
}
