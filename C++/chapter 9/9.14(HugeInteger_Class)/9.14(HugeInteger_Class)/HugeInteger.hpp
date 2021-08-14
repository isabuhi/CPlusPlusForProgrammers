//
//  HugeInteger.hpp
//  9.14(HugeInteger_Class)
//
//  Created by Sabuhi Ibrahimov on 07.07.21.
//

#ifndef HugeInteger_hpp
#define HugeInteger_hpp
#include <array>
class HugeInteger
{
public:
    static const size_t size = 40;
    
    HugeInteger(const int *, int);
    HugeInteger();
    void input();
    void output() const;
    void add();
    void subtract();
    void set();
    
private:
    std::array<int, size> hugeInteger = {};
};

#endif /* HugeInteger_hpp */
