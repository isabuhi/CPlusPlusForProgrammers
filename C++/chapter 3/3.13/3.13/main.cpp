//
//  main.cpp
//  3.13
//
//  Created by Ibrahimov Sabuhi on 7/30/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include "invoice.hpp"
using namespace std;


int main() {
    // insert code here...
    Invoice invoice1("35","RAM", 6, 200);
    Invoice invoice2("13","GPU", 9, 1000);
    
    cout<<"Initial details of invoice1\n"
    "Part number: "<<invoice1.getPartNumber()
    <<"\nPart description: "<<invoice1.getPartDesc()
    <<"\nPart quantity: "<<invoice1.getPartQuantity()
    <<"\nPart price: "<<invoice1.getPartPrice()<<
    "\nInvoice amount: "<<invoice1.getInvoiceAmount()<<endl;
    
    
    cout<<"\n\nInitial details of invoice1\n"
    "Part number: "<<invoice2.getPartNumber()
    <<"\nPart description: "<<invoice2.getPartDesc()
    <<"\nPart quantity: "<<invoice2.getPartQuantity()
    <<"\nPart price: "<<invoice2.getPartPrice()<<
    "\nInvoice amount: "<<invoice2.getInvoiceAmount()<<endl;
}
