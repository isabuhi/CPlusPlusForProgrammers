//
//  invoice.cpp
//  3.13
//
//  Created by Ibrahimov Sabuhi on 7/30/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//
#include<iostream>
#include "invoice.hpp"
using namespace std;

Invoice::Invoice(string p_number, string p_desc, int p_quantity, int p_price)
:partNumber(p_number), partDesc(p_desc)
{
    if(p_quantity>=0){
        partQuantity = p_quantity;
    }
    else{
        partQuantity = 0;
    }
    if(p_price>=0){
        partPrice = p_price;
    }
    else{
        partPrice = 0;
    }
}
void Invoice::setPartNumber(string p_number){
    partNumber = p_number;
}
void Invoice::setPartDesc(string p_desc){
    partDesc = p_desc;
}
void Invoice::setPartQuantity(int p_quantity){
    partQuantity = p_quantity;
}
void Invoice::setPartPrice(int p_price){
    partPrice = p_price;
}

string Invoice::getPartNumber() const {
    return partNumber;
}
string Invoice::getPartDesc() const {
   return partDesc;
}
int Invoice::getPartQuantity() const {
    return partQuantity;
}
int Invoice::getPartPrice() const {
    return partPrice;
}

int Invoice::getInvoiceAmount() const {
    return partQuantity*partPrice;
}
