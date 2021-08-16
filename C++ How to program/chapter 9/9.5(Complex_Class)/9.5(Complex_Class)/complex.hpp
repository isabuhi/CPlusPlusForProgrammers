//
//  complex.hpp
//  9.5(Complex_Class)
//
//  Created by Sabuhi Ibrahimov on 20.06.21.
//

#ifndef complex_hpp
#define complex_hpp

class COMPLEX
{
public:
    explicit COMPLEX (double = 1, double = 1);
    void getComplex () const ;
    friend void adding(const COMPLEX &, const COMPLEX &);
    friend void subtracting(const COMPLEX &, const COMPLEX &);
private:
    double realPart;
    double imaginaryPart;
};

#endif /* complex_hpp */
