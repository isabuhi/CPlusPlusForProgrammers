//
//  main.cpp
//  7.34(Generating_Mazes_Randomly)
//
//  Created by Sabuhi Ibrahimov on 04.05.21.
//

#include <iostream>
#include <array>
#include <random>
#include <ctime>

using namespace std;
default_random_engine engine(static_cast<unsigned int>(time(0)));
uniform_int_distribution<unsigned int> randomInt(1,11);


const size_t SIZE = 12;

bool mazeTraverse(array <array < char, SIZE>, SIZE> maze, int y, int x);
bool mazeGenerator(array<array<char, SIZE>, SIZE> &maze, int y, int x);



int main() {
    array<array<char, SIZE>, SIZE> maze = {};
    for (auto &row: maze)
        for(char &col: row)
            col = '#';
    
    
    mazeGenerator(maze, 4, 11);
    mazeTraverse(maze, 4, 11);
}




bool mazeTraverse(array <array < char, SIZE>, SIZE> maze, int y, int x){
    maze[y][x] = 'X';
    
        for( auto &row: maze){
            for(auto &col:row){
                cout << col << " ";
            }
            cout << endl;
        }
    cout << endl;
    if(x==0)
        return true;
    
    if (maze[y-1][x] == '.'){
        
        if (mazeTraverse(maze, y-1, x) == true)
            return true;
    }
    
    if (maze[y][x-1] == '.'){
        if ( mazeTraverse(maze, y, x-1)== true)
            return true;
    }
    
    if(maze[y+1][x] == '.')
    {
        if (mazeTraverse(maze, y+1, x) == true)
            return true;
    }
        
    if(maze[y][x+1] == '.'){
        if (mazeTraverse(maze, y, x+1) == true)
            return true;
    }
    
    return false;
}



bool mazeGenerator(array<array<char, SIZE>, SIZE> &maze, int y, int x){
    maze[y][x] = '.';
    int random = randomInt(engine);
    if (x-random == 0){
        for(int i = 1; i <= random; ++i)
        maze[y][x-i] = '.';
        return true;
    }
    else{

    if  (y-random > 0 && randomInt(engine)%2==0){
        for(int i = 1; i <= random; ++i)
        maze[y-i][x] = '.';
        if (mazeGenerator(maze, y-random, x) == true)
            return true;
    }
    
    
    if ( x-random > 0 && randomInt(engine)%2==0){
        for(int i = 1; i < random; ++i)
        maze[y][x-i] = '.';
        if ( mazeGenerator(maze, y, x-random)== true)
            return true;
    }
    

    if( y+random < 11 && randomInt(engine)%2==0)
    {
        for(int i = 1; i <= random; ++i)
        maze[y+i][x] = '.';
        if (mazeGenerator(maze, y+random, x) == true)
            return true;
    }
    
    if(x+random < 11 && randomInt(engine)%2==0){
        for(int i = 1; i <= random; ++i)
        maze[y][x+i] = '.';
        if (mazeGenerator(maze, y, x+random) == true)
            return true;
    }
    }
    return mazeGenerator(maze, y, x);
}
