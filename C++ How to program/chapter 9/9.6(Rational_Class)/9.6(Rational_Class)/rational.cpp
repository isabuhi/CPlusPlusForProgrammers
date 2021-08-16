//
//  rational.cpp
//  9.6(Rational_Class)
//
//  Created by Sabuhi Ibrahimov on 21.06.21.
//

#include <iostream>
#include <iomanip>
#include "rational.hpp"

Rational::Rational (const int & num, const int & denom){
    setNumbers(num, denom);
}

void Rational::setNumbers(const int & num, const int & denom){
    numerator = num;
    denominator = denom;
    reducedForm();
}

void Rational::getRasional() const {
    std::cout << numerator << "/" << denominator << std::endl;
}
void Rational::getfloat() const {
    std::cout << std::fixed << std::setprecision(3) << static_cast<double>( numerator) / denominator << std::endl;
}
void Rational::reducedForm(){
    int denom = denominator;
    while(denom != 1){
        if (numerator == 0){
            numerator = 0;
            denominator = 1;
            break;
        }
        
        if((numerator % denom) == 0 && (denominator % denom) == 0){
            if((numerator / denom) != 0 && (denominator / denom) != 0){
                numerator /= denom;
                denominator /=denom;
                denom = denominator + 1;
            }
        }
        --denom;

    }
}
void Rational::add(const Rational & r){
    int num = r.numerator;
    int denom = r.denominator;
    numerator = numerator * denom + denominator * num;
    denominator *= denom;
    reducedForm();
    
}
void Rational::subtract(const Rational & r){
    int num = r.numerator;
    int denom = r.denominator;
    numerator = numerator * denom - denominator * num;
    denominator *= denom;
    reducedForm();
}
void Rational::multiply(const Rational & r){
    int num = r.numerator;
    int denom = r.denominator;
    numerator *= num;
    denominator *= denom;
    reducedForm();
}
void Rational::divide(const Rational & r){
    int num = r.numerator;
    int denom = r.denominator;
    numerator *= denom;
    denominator *= num;
    reducedForm();
}
