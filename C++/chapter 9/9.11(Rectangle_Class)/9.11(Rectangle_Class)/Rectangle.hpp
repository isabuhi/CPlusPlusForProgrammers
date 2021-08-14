//
//  Rectangle.hpp
//  9.11(Rectangle_Class)
//
//  Created by Sabuhi Ibrahimov on 24.06.21.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

class Rectangle
{
public:
    Rectangle(double = 1, double = 1);
    void setLength (double);
    void setWidth (double);
    void getRectangle () const;
    void perimeter();
    void area();
private:
    double mLength;
    double mWidth;
    double mPerimeter;
    double mArea;
};

#endif /* Rectangle_hpp */
