//
//  Rectangle.cpp
//  9.13(Enhancing_Class_Rectangle)
//
//  Created by Sabuhi Ibrahimov on 26.06.21.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include "Rectangle.hpp"
#include <array>

Rectangle::Rectangle ()
:point(nullptr),
point1 {0},
point2 {0},
point3 {0},
point4 {0},
mLength(0),
mWidth(0),
mPerimeter(0),
mArea(0),
firstQuadrant{0}
{
    
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
    detectRectangle();
    std::cout << "Perimeter: " << mPerimeter << std::endl;
}
void Rectangle::area() {
    detectRectangle();
    std::cout << "Area: " << mArea << std::endl;
}


void Rectangle::setPoint1(const double &x , const double &y){
    point1[0] = x;
    point1[1] = y;
}

void Rectangle::setPoint2(const double &x , const double &y){
    point2[0] = x;
    point2[1] = y;
}


void Rectangle::setPoint3(const double &x , const double &y){
    point3[0] = x;
    point3[1] = y;
}
void Rectangle::setPoint4(const double &x , const double &y){
    point4[0] = x;
    point4[1] = y;
}

void Rectangle::detectRectangle(){
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
            
            }

        }
    }
}


void Rectangle::draw(){
    
    firstQuadrant[25 - point1[1]][point1[0]] = 1;
    firstQuadrant[25 - point2[1]][point2[0]] = 1;
    firstQuadrant[25 - point3[1]][point3[0]] = 1;
    firstQuadrant[25 - point4[1]][point4[0]] = 1;
    border(point2, point1);
    border(point3, point2);
    border(point3, point4);
    border(point4, point1);
    setFillCharacter();
    int i = 25;
    for (auto &row : firstQuadrant){
        
        std::cout<< std::setw(2)<< i;
        for(auto col : row){
            if (col == 1){
                std::cout<< std::setw(4) << "*";
            }
            else{
                std::cout << std::setw(4) << ".";
            }
        }
        std::cout << "\n\n" ;
        --i;
    }
    
    for(i = 0; i <= 25; ++i){
        if (i == 0)
            std::cout << std::setw(6) << i;
        else
        std::cout << std::setw(4) << i;
    }
    std::cout<< std::endl;
}



void Rectangle::border(double * x, double * y){
    double k = 0;
    if((x[0] - y[0])!= 0){
        k = (x[1] - y[1])/(x[0] - y[0]);
        for(int i = 1; i < std::fabs(x[0] - y[0]); ++i){
            firstQuadrant[25 - (i*k + y[1])][i + y[0]] = 1;
        }
    }
    else{
        for(int i = 1; i < std::fabs(x[1] - y[1]); ++i){
            firstQuadrant[25 - (i + y[1])][y[0]] = 1;
        }
    }
}



void Rectangle::setFillCharacter(){
    for(int i = 25 - point4[1]; i <= 25 - point1[1]; ++i){
        for(int j = point1[0]; j <= point2[0]; ++j){
            firstQuadrant[i][j] = 1;
        }
    }
}
