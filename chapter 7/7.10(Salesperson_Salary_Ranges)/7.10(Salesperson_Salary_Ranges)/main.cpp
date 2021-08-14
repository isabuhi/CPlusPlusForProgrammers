//
//  main.cpp
//  7.10(Salesperson_Salary_Ranges)
//
//  Created by Sabuhi Ibrahimov on 05.03.21.
//

#include <iostream>
#include <array>

int main() {
    const size_t size = 9;
    std::array<int, size> counters;
    double sales = 0;
    int n = 1;
    while(sales != -1){
        std::cout << "Enter " << n << "st " << "salesperson sale or -1 for finish: ";
        std::cin >> sales;
        if (sales == -1)
            continue;
        sales = 200 + sales/100*9;
        
        if(sales >=200 && sales <= 299)
            ++counters[0];
        if(sales >=300 && sales <= 399)
            ++counters[1];
        if(sales >=400 && sales <= 499)
            ++counters[2];
        if(sales >=500 && sales <= 599)
            ++counters[3];
        if(sales >=600 && sales <= 699)
            ++counters[4];
        if(sales >=700 && sales <= 799)
            ++counters[5];
        if(sales >=800 && sales <= 899)
            ++counters[6];
        if(sales >=900 && sales <= 999)
            ++counters[7];
        if(sales >=1000)
            ++counters[8];
        ++n;
    }
    std::cout << "\n\n$200–299: " << counters[0] << "\n"
    << "$300–399: " << counters[1] << "\n"
    << "$400–499: " << counters[2] << "\n"
    << "$500–599: " << counters[3] << "\n"
    << "$600–699: " << counters[4] << "\n"
    << "$700–799: " << counters[5] << "\n"
    << "$800–899: " << counters[6] << "\n"
    << "$900–999: " << counters[7] << "\n"
    << "$1000 and over: " << counters[8] << std::endl;
    
}
