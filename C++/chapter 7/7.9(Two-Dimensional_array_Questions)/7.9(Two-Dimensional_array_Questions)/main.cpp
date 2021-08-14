//
//  main.cpp
//  7.9(Two-Dimensional_array_Questions)
//
//  Created by Sabuhi Ibrahimov on 05.03.21.
//

#include <iostream>
#include <array>
#include <iomanip>
int main() {
//  a) Write a declaration for t.
    const size_t row = 2;
    const size_t col = 3;
    std::array<std::array<int, col>,row> t;
    
//  b) How many rows does t have? - 2
//  c) How many columns does t have? - 3
//  d) How many elements does t have? - 6
//  e) Write the names of all the elements in row 1 of t. - t[1][0], t[1][1], t[1][2]
//  f) Write the names of all the elements in column 2 of t. - t[0][2], t[1][2]
//  g) Write a statement that sets the element of t in the first row and second column to zero.
    t[0][1] = 0;
//  h) Write a series of statements that initialize each element of t to zero. Do not use a loop.
    t[0][0] = 0;
    t[0][1] = 0;
    t[0][2] = 0;
    t[1][0] = 0;
    t[1][1] = 0;
    t[1][2] = 0;
//  i) Write a nested counter-controlled for statement that initializes each element of t to zero.
    for (size_t i = 0; i < t.size(); ++i){
        for (size_t j = 0; j < t[i].size(); ++j) {
            t[i][j] = 1;
        }
    }
    
//  j) Write a nested range-based for statement that initializes each element of t to zero.
    for (auto &row: t) {
        for (int &col: row) {
            col = 3;
        }
    }
//  k) Write a statement that inputs the values for the elements of t from the keyboard.
    for (auto &row: t) {
        for (int &col: row) {
            std::cin >> col;
        }
    }
//  l) Write a series of statements that determine and display the smallest value in array t.
    int smallest = t[0][0];
    for (auto &row: t) {
        for (int &col: row) {
            if (smallest >= col )
                smallest = col;
        }
    }
    std::cout << "\n" << smallest << "\n" << std::endl;
//  m) Write a statement that displays the elements in row 0 of t.
    for(size_t i = 0; i < t[0].size(); ++i){
        std::cout << t[0][i] << std::endl;
    }
//  n) Write a statement that totals the elements in column 2 of t.
    int total = 0;
    for(size_t i = 0; i < t.size(); ++i){
        total += t[i][2];
    }
    std::cout << total << std::endl;
//  o) Write a series of statements that prints the array t in neat,tabular format.List the column subscripts as headings across the top and list the row subscripts at the left of each row.
    std::cout << "    " << " Col 1" << " Col 2" << " Col 3" << std::endl;
    std::cout << "Row 1" << std::setw(5) << t[0][0] << std::setw(6) << t[0][1] << std::setw(6) << t[0][2] << std::endl;
    std::cout << "Row 2" << std::setw(5) << t[1][0] << std::setw(6) << t[1][1] << std::setw(6) << t[1][2] << std::endl;
}
