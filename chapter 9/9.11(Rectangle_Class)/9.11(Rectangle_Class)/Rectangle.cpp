//
//  Rectangle.cpp
//  9.11(Rectangle_Class)
//
//  Created by Sabuhi Ibrahimov on 24.06.21.
//


#include <iostream>
#include "Rectangle.hpp"


Rectangle::Rectangle (double l, double w)
:mPerimeter(1),
mArea(1)
{
    setLength(l);
    setWidth(w);
    
}

void Rectangle::setLength(double lw){
    if(lw <= 20 && lw >= 0)
        mLength = lw;
    else
        mLength = 1;
    perimeter();
    area();
}
void Rectangle::setWidth(double lw){
    if(lw <= 20 && lw >= 0)
        mWidth = lw;
    else
        mWidth = 1;
    perimeter();
    area();
}

void Rectangle::perimeter() {
    mPerimeter = (mWidth + mLength)*2;
}

void Rectangle::area() {
    mArea = mWidth * mLength;
}

void Rectangle::getRectangle() const {
    std::cout << "Length: " << mLength << ". Width: " << mWidth << ". Perimeter: " << mPerimeter << ". Area: " << mArea << std::endl;
}
