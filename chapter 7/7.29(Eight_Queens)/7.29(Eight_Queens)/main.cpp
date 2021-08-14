//
//  main.cpp
//  7.29(Eight_Queens)
//
//  Created by Sabuhi Ibrahimov on 27.04.21.
//

#include <iostream>
#include <array>
#include <iomanip>
using namespace std;
const size_t SIZE = 8;

int count = 0;

void queen(array<std::array<int, SIZE>, SIZE> board, int row, int col){
    bool flag = 0;
    for(int y = 0; y < board.size(); ++y){
        for(int x = 0; x < board.size(); ++x){
            if(y - row == x - col || y - row == col - x || y == row || x == col){
                if (board[y][x] == 1){
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1){
            break;
        }
    }
    if (flag == 0){
        board[row][col] = 1;
        if (row == SIZE -1){
            std::cout << std::endl;
            for(auto &row : board){
                for (int &col: row) {
                     if(col == 0) std::cout << " ."; else std::cout << " *";
                }
                std::cout << std::endl;
            }
            ++::count;
            return;
        }
    
        queen (board, row + 1, 0);
    }
    board[row][col] = 0;
    if (col < SIZE-1){
        queen (board, row,  ++col);
        return;
    }
    else
        return;
        
        
}
int main() {
    
    std::array<std::array<int, SIZE>, SIZE> board = {0};
    
    queen(board, 0, 0);
    
    
    
    cout << ::count << endl;
    
    
}

