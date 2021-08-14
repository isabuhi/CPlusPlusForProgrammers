//
//  Account.hpp
//  3.12
//
//  Created by Ibrahimov Sabuhi on 7/30/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <string>

class Account
{
public:
    explicit Account(int );
   
    void credit (int);
    
    void debit (int);
    
    int getBalance()const;
private:
    int balance;
};
