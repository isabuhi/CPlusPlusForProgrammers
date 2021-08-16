//
//  main.cpp
//  6.39(Towers_of_Hanoi:_Iterative_Version)
//
//  Created by Sabuhi Ibrahimov on 10.02.21.
//

#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long); // function prototype
int n = 0;
unsigned long result = 0;

int main()
{
    // calculate the factorials of 0 through 10
    for (unsigned int counter = 0; counter <= 10; ++counter)
    {
        cout << setw(2) << "\n" << counter << "! = " << factorial(counter)
            << endl;
        n = 0;
        std::cout << "---------------" << std::endl;
    }
        
} // end main

// recursive definition of function factorial
unsigned long factorial(unsigned long number)
{
    n++;
    std::cout << "\n" << std::setw(n) << "(" << number << "! = " << number << " * " << (number == 0 ? 1 : number-1) << "!), ?= " << (number == 0 ? 1 : number - 1) << "!";
    
    if (number <= 1) // test for base case
    {
        return 1; // base cases: 0! = 1 and 1! = 1
    }
    else
    {// recursion step
        result = number * factorial(number - 1);
        return result;
    }
} // end function factorial
