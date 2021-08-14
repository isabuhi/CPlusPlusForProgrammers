//
//  main.cpp
//  9.13(Enhancing_Class_Rectangle)
//
//  Created by Sabuhi Ibrahimov on 26.06.21.
//

#include <iostream>
#include "Rectangle.hpp"

int main() {
    Rectangle r;
    r.setPoint1(1,1);
    r.setPoint2(9,1);
    r.setPoint3(9,6);
    r.setPoint4(1, 6);
    
    r.perimeter();
    r.area();
    
    
    r.draw();
}
