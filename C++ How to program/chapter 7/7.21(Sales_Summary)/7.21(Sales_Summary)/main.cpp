//
//  main.cpp
//  7.21(Sales_Summary)
//
//  Created by Sabuhi Ibrahimov on 11.03.21.
//

#include <iostream>
#include <array>
#include <iomanip>

int main() {
    const size_t row = 6;
    const size_t col = 5;
    
    std::array<std::array<double, col>, row> sales = {};
    int add = 0;
    while(add != -1){
        std::cout << "Press any button to continue or -1 to finish: ";
        std::cin >> add;
        if (add != -1){
            size_t salesPerson = row;
            while(0 > salesPerson || col - 1 < salesPerson){
            std::cout << "\nEnter salesperson number: ";
            std::cin >> salesPerson;
            }
            size_t product = col;
            while(0 > product || row - 1 < product){
            std::cout << "\nEnter product number: ";
            std::cin >> product;
            }
            double valueProduct = 0;
            std::cout << "\nEnter value of that product: ";
            std::cin >> valueProduct;
            sales[product-1][salesPerson-1] += valueProduct;
        }
    }
    for(size_t i = 0; i < sales.size()-1; ++i){
        for(size_t j = 0; j < sales[i].size() - 1; ++j){
            sales[i][col-1] += sales[i][j];
        }
    }
    for(size_t j = 0; j < sales[0].size() - 1; ++j){
        for(size_t i = 0; i < sales.size()-1; ++i){
                sales[row - 1][j] += sales[i][j];
        }
    }
    
    std::cout << "         " << " Person 1" << " Person 2" << " Person 3" << " Person 4" << std::endl;
    for(size_t i = 0; i < sales.size(); ++i){
        if(i < sales.size() - 1){
            std::cout << "Product " << i + 1;
        }
        else
            std::cout << "Per total";
        for(size_t j = 0; j < sales[i].size(); ++j){
            std::cout << std::setw(9) << std::right << sales[i][j];
            
        }
        std::cout << std::endl;
    }

}
