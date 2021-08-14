//
//  main.cpp
//  7.24(Eight_Queens)
//
//  Created by Sabuhi Ibrahimov on 22.03.21.
//

#include <iostream>
#include <array>
#include <random>
#include <ctime>
#include <iomanip>
int main() {
    std::default_random_engine engine(static_cast<unsigned int>(time(0)));
    std::uniform_int_distribution<int>randomInt(0,7);
    int smallestElim = 22;
    int currentRow = 0;
    int currentCol = 0;
    int numberQueens = 0;
    const size_t SIZE = 8;
    std::array<std::array<int, SIZE>, SIZE> eliminated = {0};
    std::array<std::array<int, SIZE>, SIZE> board = {0};
    
    
    
    
    
    
    while (true) {
        
        smallestElim = 22;
        numberQueens = 0;
        for(auto &row: board)
            for(auto &col: row)
                if (col == 1) {
                    ++numberQueens;
                }
        if (numberQueens == 8) {
            break;
        }
        
        
        for(auto &row: board)
            for(auto &col: row)
                    col = 0;
        
        
        for(int i = 0; i < eliminated.size(); ++i){
            for(int j = 0; j < eliminated[i].size(); ++j){
                int k = 2 * SIZE - 1;
                if (i < j)
                    k += i;
                else
                    k += j;
                
                if (i < (SIZE - 1 - j))
                    k += i;
                else
                    k += (SIZE - 1 - j);
                
                if ((SIZE - 1 -i) < (SIZE - 1 - j))
                    k += (SIZE - 1 - i);
                else
                    k += (SIZE - 1 - j);
                
                if ((SIZE - 1 -i) < j)
                    k += (SIZE - 1 - i);
                else
                    k += j;
                eliminated[i][j] = k;
            }
        }
        
        for(int i = 0; i < 8; ++i) {
            while(true){
                currentRow = randomInt(engine);
                currentCol = randomInt(engine);
                if(smallestElim == eliminated[currentRow][currentCol]){
                    
                    board[currentRow][currentCol] = 1;
                    break;
                }
                bool flag = true;
                for(auto &row : eliminated){
                    for (int &col: row) {
                        if (col != 0)
                            flag = false;
                    }
                }
                if (flag) {
                    break;
                }
            }
        

              for ( int row{}; row < SIZE; ++row )
                 for ( int col{}; col < SIZE; ++col )
                    if ( row == currentRow || col == currentCol )
                       eliminated[ row ][ col ] = 0;

              for ( int diag{ 1 }; diag < SIZE; ++diag ) {

                  const int RP{ currentRow + diag };
                  const int RM{ currentRow - diag };
                  const int CP{ currentCol + diag };
                  const int CM{ currentCol - diag };
                  
                 if ( RP < eliminated.size() && CP < eliminated.size() ) eliminated[ RP ][ CP ] = 0;
                 if ( RP < eliminated.size() && CM >= 0  ) eliminated[ RP ][ CM ] = 0;
                 if ( RM >= 0   && CM >= 0 ) eliminated[ RM ][ CM ] = 0;
                 if ( RM >= 0   && CP < eliminated.size() ) eliminated[ RM ][ CP ] = 0;
              }
        
            
            for ( int row{0}; row < eliminated.size(); ++row ){
                for ( int col{0}; col < eliminated[row].size(); ++col ){
                    
                    if ( eliminated[ row ][ col ] != 0 ) {
                        
                       int c{0}; // elimination number, counter

                        for ( size_t r{0}; r < eliminated.size(); ++r ){
                            for ( size_t s{0}; s < eliminated[r].size(); ++s ){
                              if ( r == row || s == col ){
                                  if(eliminated[r][s] != 0)
                                      ++c;
                                  
                              }
                            }
                        }
                       for ( int d = 1; d < SIZE; ++d ) {
                          const int RP{ row + d };
                          const int RM{ row - d };
                          const int CP{ col + d };
                          const int CM{ col - d };
                           
                           if ( RP < SIZE && CP < SIZE && eliminated[ RP ][ CP ] != 0 ) {++c; }
                           if ( RP < SIZE && CM >= 0 && eliminated[ RP ][ CM ] != 0 ) {++c;}
                           if ( RM >= 0   && CM >= 0 && eliminated[ RM ][ CM ] != 0 ) {++c;}
                           if ( RM >= 0   && CP < SIZE && eliminated[ RM ][ CP ] != 0 ) {++c;}
                       }
                        
                       
                        eliminated[ row ][ col ] = c;
                        
                        
                    }
           
                    
                
                }
                
            }
            for(auto &row : eliminated){
                for (int &col: row) {
                    if(col < 22 && col != 0)
                        smallestElim = col;
                }
            }
           
        }
        
        
    }
    
    std::cout << std::endl;
    for(auto &row : board){
        for (int &col: row) {
             if(col == 0) std::cout << " . "; else std::cout << " ()"; 
        }
        std::cout << std::endl;
    }

}
