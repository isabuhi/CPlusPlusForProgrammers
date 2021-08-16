//
//  invoice.hpp
//  3.13
//
//  Created by Ibrahimov Sabuhi on 7/30/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//
#include<string>

class Invoice
{
public:
    explicit Invoice(std::string, std::string, int, int);
    void setPartNumber(std::string);
    std::string getPartNumber()const;
    void setPartDesc(std::string);
    std::string getPartDesc()const;
    void setPartQuantity(int);
    int getPartQuantity()const;
    void setPartPrice(int);
    int getPartPrice()const;
    int getInvoiceAmount()const;
private:
    std::string partNumber;
    std::string partDesc;
    int partQuantity;
    int partPrice;
};
