//
//  main.cpp
//  7.22(Knight’s_Tour)
//
//  Created by Sabuhi Ibrahimov on 16.03.21.
//

#include <iostream>
#include <array>
using namespace std;

int main() {
    const size_t col_row = 8;

    array<array<int, col_row>, col_row> accessibility = {2,3,4,4,4,4,3,2,3,4,6,6,6,6,4,3,4,6,8,8,8,8,6,4,4,6,8,8,8,8,6,4,4,6,8,8,8,8,6,4,4,6,8,8,8,8,6,4,3,4,6,6,6,6,4,3,2,3,4,4,4,4,3,2};
    array<int, col_row> horizontal = {2, 1, -1, -2, -2, -1, 1, 2};
    array<int, col_row> vertical = {-1, -2, -2, -1, 1, 2, 2, 1};
    size_t currentRow = 0;
    size_t currentCol = 0;
    size_t x = 0;
    size_t y = 0;
    accessibility[y][x] = 0;
    
    
    
    
    double flag = true;
    for(int i = 1; i <= 63; ++i){
        size_t latestX = 0;
        size_t latestY = 0;
        
        for (size_t j = 0; j < horizontal.size(); ++j) {
            x = currentCol + horizontal[j];
            y = currentRow + vertical[j];
            if (accessibility[y][x] != 0 && x >= 0 && x < 8 && y >= 0 && y < 8 ){
                --accessibility[y][x];
                if (latestX == 0 && latestY == 0){
                    latestX = x;
                    latestY = y;
                }
                else if(accessibility[y][x] <= accessibility[latestY][latestX]){
                    
                    latestX = x;
                    latestY = y;
                }
                flag = false;
            }
        }
        for (auto &row: accessibility) {
            for(int &col: row){
                cout << col << " ";
            }
            cout << endl;
        }
        cout << endl;
        
        if (flag){
            break;
        }
        
        currentCol = latestX;
        currentRow = latestY;
        
        accessibility[latestY][latestX] = 0;
        flag = true;
        
    }
    

    
    
}
