//
//  main.cpp
//  7.27(The_Sieve_of_Eratosthenes)
//
//  Created by Sabuhi Ibrahimov on 25.04.21.
//

#include <iostream>
#include <array>
using namespace std;

int main() {
    const size_t size = 1000;
    
    array<double, size> prime ={};
    for (double & col : prime) {
        col = true;
    }
    for(size_t i = 2; i < prime.size(); ++i){
        for(size_t j = 2; j < prime.size(); ++j){
            if(i * j < prime.size()){
            prime[i * j] = false;
            }
            else
                break;
        }
    }
    for(size_t i = 2; i < prime.size(); ++i){
        if (prime[i] == true)
            cout << i << " ";
    }
    
}
