//
//  rational.hpp
//  9.6(Rational_Class)
//
//  Created by Sabuhi Ibrahimov on 21.06.21.
//

#ifndef rational_hpp
#define rational_hpp

class Rational
{
public:
    explicit Rational(const int & = 0, const int & = 1);
    void setNumbers(const int &, const int &);
    void getRasional() const;
    void getfloat() const;
    void add(const Rational &);
    void subtract(const Rational &);
    void multiply(const Rational &);
    void divide(const Rational &);
private:
    void reducedForm ();
    int numerator;
    int denominator;
};

#endif /* rational_hpp */
