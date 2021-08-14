//
//  Rectangle.hpp
//  9.13(Enhancing_Class_Rectangle)
//
//  Created by Sabuhi Ibrahimov on 26.06.21.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp
#include <array>
class Rectangle
{
public:
    Rectangle ();
    void setRectangle();
    void perimeter();
    void area();
    void draw();
    void setPoint1(const double &, const double &);
    void setPoint2(const double &, const double &);
    void setPoint3(const double &, const double &);
    void setPoint4(const double &, const double &);
    void detectRectangle();
    void setFillCharacter();
private:
    std::array<std::array <double, 26>, 26> firstQuadrant;
    void border(double *, double *);
    void setPoint();
    double *point;
    double point1[2];
    double point2[2];
    double point3[2];
    double point4[2];
    double mLength;
    double mWidth;
    double mArea;
    double mPerimeter;
};

#endif /* Rectangle_hpp */

