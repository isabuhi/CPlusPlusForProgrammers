//
//  Rectangle.hpp
//  9.12(Enhancing_Class_Rectangle)
//
//  Created by Sabuhi Ibrahimov on 25.06.21.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

class Rectangle
{
public:
    Rectangle ();
    void setRectangle();
    void perimeter();
    void area();
private:
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
