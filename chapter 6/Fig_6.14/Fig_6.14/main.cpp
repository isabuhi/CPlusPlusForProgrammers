//
//  main.cpp
//  Fig_6.14
//
//  Created by Ibrahimov Sabuhi on 11/7/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
int f1();
int f2();
int f3();
int main() {
    return f1();
}

int f1() {
    return f2();
}

int f2() {
    return f3();
}

int f3() {
    return 7;
}
