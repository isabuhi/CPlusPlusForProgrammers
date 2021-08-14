//
//  3_14.hpp
//  3.14
//
//  Created by Ibrahimov Sabuhi on 7/31/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include<string>

class Employee
{
public:
    explicit Employee(std::string, std::string, float);
    void setFirstName (std::string);
    std::string getFirstName() const;
    void setLastName (std::string);
    std::string getLastName() const;
    void setMonthSalary (float);
    float getMonthSalary() const;
private:
    std::string firstName;
    std::string lastName;
    float monthSalary;
};
