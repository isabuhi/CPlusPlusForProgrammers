//
//  main.cpp
//  6.52(Function_Template_minimum)
//
//  Created by Sabuhi Ibrahimov on 14.02.21.
//

#include <iostream>
template <typename T>
T minimum ( T x, T y){
    if(x > y)
        return y;
    else
        return x;
}

int main() {
    int x = 4;
    int y = 8;
    std::cout << minimum(x, y) <<std::endl;
    char a = 'y';
    char b = 'b';
    std::cout << minimum(a, b) <<std::endl;
    double z = 5.787;
    double d = 8.889898;
    std::cout << minimum(z, d) <<std::endl;
}
