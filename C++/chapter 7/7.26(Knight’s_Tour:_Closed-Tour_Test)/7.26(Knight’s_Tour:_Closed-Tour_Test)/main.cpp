//
//  main.cpp
//  7.26(Knight’s_Tour:_Closed-Tour_Test)
//
//  Created by Sabuhi Ibrahimov on 24.04.21.
//

#include <iostream>
#include <array>
#include <random>
#include <ctime>
using namespace std;

int main() {
    std::default_random_engine engine(static_cast<unsigned int>(time(0)));
    std::uniform_int_distribution<int>randomInt(1,2);
    const size_t col_row = 8;

    
    array<int, col_row> horizontal = {2, 1, -1, -2, -2, -1, 1, 2};
    array<int, col_row> vertical = {-1, -2, -2, -1, 1, 2, 2, 1};
    
   
    
    int i = 0;
    while (true){
        cout << "------------------------------------" << endl;
        size_t x = 0;
        size_t y = 0;
        int currentRow = 0;
        int currentCol = 0;
        size_t endRow = 0;
        size_t endCol = 0;
        array<array<int, col_row>, col_row> accessibility = {2,3,4,4,4,4,3,2,3,4,6,6,6,6,4,3,4,6,8,8,8,8,6,4,4,6,8,8,8,8,6,4,4,6,8,8,8,8,6,4,4,6,8,8,8,8,6,4,3,4,6,6,6,6,4,3,2,3,4,4,4,4,3,2};
        accessibility[y][x] = 0;
        double flag2 = true;
    
    for( i = 1; i <= 63; ++i){
        
        size_t latestX = 0;
        size_t latestY = 0;
        
        for (size_t j = 0; j < horizontal.size(); ++j) {
            x = currentCol + horizontal[j];
            y = currentRow + vertical[j];
            if (accessibility[y][x] != 0 && x >= 0 && x < 8 && y >= 0 && y < 8 ){
                if (i == 63){
                    endRow = y;
                    endCol = x;
                }
                --accessibility[y][x];
                if (latestX == 0 && latestY == 0){
                    latestX = x;
                    latestY = y;
                }
                else if(accessibility[y][x] <= accessibility[latestY][latestX]){
                    
                    latestX = x;
                    latestY = y;
                }

            }
        }
        
        
        
        int xdelta = 0;
        int ydelta = 0;
        while (true){
            ydelta = currentRow;
            xdelta = currentCol;
            int delta = randomInt(engine);
            
            
            
            if((randomInt(engine) % 2) == 0 ){
                if(ydelta + delta < 8)
                ydelta += delta;
                else{
                    continue;
                }
            }
            else{
                if(ydelta + delta * -1 >= 0)
                ydelta += delta * -1;
                else
                    continue;
            }
            
            if (delta == 2){
                if((randomInt(engine) % 2) == 0){
                    if(0 <=xdelta + 1 && xdelta + 1 < 8)
                    xdelta += 1;
                    else
                        continue;
                }
                else{
                    if(xdelta - 1 >= 0 && xdelta - 1 < 8)
                    xdelta += -1;
                    else
                        continue;
                }
            }
            else{
                if((randomInt(engine) % 2) == 0){
                    if(0 <=xdelta +2 && xdelta + 2 < 8)
                    xdelta += 2;
                    else
                        continue;
                }
                else{
                    if(xdelta - 2 >= 0 && xdelta - 2 < 8)
                    xdelta += -2;
                    else
                        continue;
                }
            }
            
            if (accessibility[latestY][latestX] == accessibility[ydelta][xdelta]){
                
                currentCol = xdelta;
                currentRow = ydelta;
                
                
                
                accessibility[currentRow][currentCol] = 0;
                if (i == 63){
                    if(endRow == 1){
                        if(endCol == 2){
                            flag2 = false;
                            
                        }
                    }
                    if(endRow == 2){
                        if(endCol == 1){
                            flag2 = false;
                            
                        }
                    }
                }
                
                break;
            }
            
        }
        
    
        
        cout << endl;
        cout << endl;
        cout << currentRow << " " << currentCol << endl;
        for (auto &row: accessibility) {
            for(int &col: row){
                cout << col << " ";
            }
            cout << endl;
        }
        cout << endl;
        
    }
        
    if(flag2 == false)
        break;
    }
    
}
