//
//  main.cpp
//  6.33(Coin_Tossing)
//
//  Created by Sabuhi Ibrahimov on 27.01.21.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
bool flip(){
    if(rand() % 2 == 0)
        return true;
    else
        return false;
}
int main() {
    int head = 0;
    int tail = 0;
    srand(time(0));
    for (unsigned int i = 1; i <= 1000; ++i){
        std::cout << (flip() ? "Head" : "Tail") << "\n";
        if(flip())
            ++head;
        else
            ++tail;
    }
    std::cout << "\n\nHead " << head << "\n";
    std::cout << "Tail " << tail << "\n";
}
