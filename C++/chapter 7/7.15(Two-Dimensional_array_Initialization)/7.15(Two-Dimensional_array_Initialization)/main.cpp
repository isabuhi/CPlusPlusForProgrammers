//
//  main.cpp
//  7.15(Two-Dimensional_array_Initialization)
//
//  Created by Sabuhi Ibrahimov on 08.03.21.
//

#include <iostream>
#include <array>


int main() {
    const size_t row = 3;
    const size_t col = 5;
    std::array<std::array<int, col>, row> sales;
    for ( size_t row = 0; row < sales.size(); ++row ){
        for ( size_t column = 0; column < sales[ row ].size(); ++column ){
            sales[ row ][ column ] = 0;
            std::cout << "[" << row <<"][" << column << "] ";
        }
        std::cout << std::endl;
    }
}
