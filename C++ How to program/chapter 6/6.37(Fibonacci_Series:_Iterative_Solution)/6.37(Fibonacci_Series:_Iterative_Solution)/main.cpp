//
//  main.cpp
//  6.37(Fibonacci_Series:_Iterative_Solution)
//
//  Created by Sabuhi Ibrahimov on 27.01.21.
//

#include <iostream>
long unsigned int fibonacci(long unsigned int number){
    long unsigned int fibonacci = 0;
    long unsigned int newFibonacci = 1;
    long unsigned int oldFibonacci = 0;
    for (long unsigned int i = 1; i < number; ++i){
        fibonacci = oldFibonacci + newFibonacci;
        oldFibonacci = newFibonacci;
        newFibonacci =fibonacci;
    }
    return fibonacci;
}
int main() {
    std::cout << fibonacci(1) << std::endl;
    std::cout << fibonacci(2) << std::endl;
    std::cout << fibonacci(3) << std::endl;
    std::cout << fibonacci(4) << std::endl;
    std::cout << fibonacci(5) << std::endl;
    std::cout << fibonacci(6) << std::endl;
    std::cout << fibonacci(7) << std::endl;
    std::cout << fibonacci(20) << std::endl;
    std::cout << fibonacci(30) << std::endl;
    std::cout << fibonacci(35) << std::endl;
}
