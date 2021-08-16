//
//  main.cpp
//  7.33(Maze_Traversal)
//
//  Created by Sabuhi Ibrahimov on 03.05.21.
//

#include <iostream>
#include <array>
#include <random>
#include <ctime>
using namespace std;
const size_t SIZE = 12;

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




int main() {
                  
    string stringMaze = "#############...#......#..#.#.####.####.#....#.##....###.#..####.#.#.#.##..#.#.#.#.###.#.#.#.#.##........#.#######.###.##......#...#############";
    array <array < char, SIZE>, SIZE> maze = {};
    
    
    int i = 0;
    for( auto &row: maze)
        for(auto &col:row){
            col =stringMaze[i];
            ++i;
        }
    mazeTraverse(maze, 4, 11);
     
     
    
    
}
