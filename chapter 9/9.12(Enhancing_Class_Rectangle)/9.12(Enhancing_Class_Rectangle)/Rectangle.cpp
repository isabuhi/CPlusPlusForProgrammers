//
//  Rectangle.cpp
//  9.12(Enhancing_Class_Rectangle)
//
//  Created by Sabuhi Ibrahimov on 25.06.21.
//


#include <iostream>
#include <cmath>
#include <iomanip>
#include "Rectangle.hpp"

Rectangle::Rectangle ()
:point(nullptr),
point1 {0},
point2 {0},
point3 {0},
point4 {0},
mLength(0),
mWidth(0),
mPerimeter(0),
mArea(0)
{
    
    setRectangle();
    
}



void Rectangle::setRectangle(){
    point = point1;
    setPoint();
    point = point2;
    setPoint();
    point = point3;
    setPoint();
    point = point4;
    setPoint();
    double dioganal = sqrt(pow(point1[0] - point2[0], 2) + pow(point1[1] - point2[1], 2));
    if (dioganal < sqrt(pow(point1[0] - point3[0], 2) + pow(point1[1] - point3[1], 2)))
        dioganal =sqrt(pow(point1[0] - point3[0], 2) + pow(point1[1] - point3[1], 2));
    if (dioganal < sqrt(pow(point1[0] - point4[0], 2) + pow(point1[1] - point4[1], 2)))
        dioganal =sqrt(pow(point1[0] - point4[0], 2) + pow(point1[1] - point4[1], 2));
    
    double side1 =sqrt(pow(point1[0] - point2[0], 2) + pow(point1[1] - point2[1], 2));
    double side2 =sqrt(pow(point2[0] - point3[0], 2) + pow(point2[1] - point3[1], 2));
    double side3 =sqrt(pow(point3[0] - point4[0], 2) + pow(point3[1] - point4[1], 2));
    double side4 =sqrt(pow(point4[0] - point1[0], 2) + pow(point4[1] - point1[1], 2));
    if((side1 / side2 == side3 / side4 && (side1 == side2 ||side1 == side3 )) || (side1 / side2 == side4 / side3 && (side1 == side2 ||side1 == side4 ))){
        if (side1 != side2 || side2 != side3 || side3 != side4 || side4 != side1){
            if (side1 != 0 && side2 != 0 && side3 != 0 && side4 != 0){
            double smallestSide = side1;
            if (smallestSide > side2)
                smallestSide = side2;
            if (smallestSide > side3)
                smallestSide = side3;
            if (smallestSide > side4)
                smallestSide = side4;
            double a = sqrt(dioganal*dioganal - smallestSide*smallestSide);
            if ( a < smallestSide){
                mWidth = a;
                mLength = smallestSide;
            }
            else{
                mWidth = smallestSide;
                mLength = a;
            }
            mPerimeter = 2 * (mLength + mWidth);
            mArea = mLength * mWidth;
            std::cout << "This is rectangle!" << std::endl;
            }
            else{
                std::cout << "This is not rectangle!" << std::endl;
            }
        }
    }
    
    
}


void Rectangle::setPoint(){
    double x ,y =0;
    std::cout << "Enter point: \nx = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    
    
    if(sqrt(x * x + y * y) <= 20){
    *point = x;
    *(point + 1) = y;
    }
    else{
        std::cout << "Larger than 20!\n";
    }
    std::cout << std::endl;
}

void Rectangle::perimeter() {
    std::cout << "Perimeter: " << mPerimeter << std::endl;
}
void Rectangle::area() {
    std::cout << "Area: " << mArea << std::endl;
}
