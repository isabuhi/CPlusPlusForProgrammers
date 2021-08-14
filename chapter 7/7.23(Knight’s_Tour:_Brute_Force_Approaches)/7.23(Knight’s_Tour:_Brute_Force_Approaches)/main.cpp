//
//  main.cpp
//  7.23(Knight’s_Tour:_Brute_Force_Approaches)
//
//  Created by Sabuhi Ibrahimov on 18.03.21.
//

#include <iostream>
#include <array>
#include <random>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<size_t>randomInt(0,7);
    
    const size_t col_row = 8;

    array<array<int, col_row>, col_row> board = {};
    array<int, col_row> horizontal = {2, 1, -1, -2, -2, -1, 1, 2};
    array<int, col_row> vertical = {-1, -2, -2, -1, 1, 2, 2, 1};
    size_t currentRow = 0;
    size_t currentCol = 0;
    size_t x = 0;
    size_t y = 0;
    unsigned int tour = 0;
    int count = 0;
    size_t index = 0;
    
    
    double flag = true;
    while(count != 63) {
        ++tour;
        cout << tour << "\n";
        count = 0;
        currentRow = 0;
        currentCol = 0;
        for(auto &row : board){
            for (int &col: row) {
                col = 0;
            }
        }
        board[0][0] = 1;
        for(int i = 1; i <= 63; ++i){
            for (size_t j = 0; j < horizontal.size(); ++j) {
                x = currentCol + horizontal[j];
                y = currentRow + vertical[j];
                if (board[y][x] == 0 && x >= 0 && x < 8 && y >= 0 && y < 8 ){
                    flag = false;
                }
            }
            if (flag!= true){
                while(true){
                index = randomInt(engine);
                x = currentCol + horizontal[index];
                y = currentRow + vertical[index];
                if (board[y][x] == 0 && x >= 0 && x < 8 && y >= 0 && y < 8 ){
                    ++count;
                    board[y][x] = count + 1;
                    currentCol = x;
                    currentRow = y;
                    break;
                }
                    
                
                }
            }
            
            
            if (flag){
                break;
            }
            
            
            flag = true;
            
        }
        
        
    }
    
    cout << endl;
    for(auto &row : board){
        for (int &col: row) {
            cout << setw(2)<< col << " ";
        }
        cout << endl;
    }
    
}
