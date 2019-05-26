//
// Created by Popa0 on 5/26/2019.
//

#ifndef UNTITLED_TRIANGLE_H
#define UNTITLED_TRIANGLE_H


#include "Shape.h"

class Triangle : public Shape {

public:

    int side2, side3;

    Triangle(int side, int side2, int side3);
    int perimeter() override;
    double aria() override;

};


#endif //UNTITLED_TRIANGLE_H
