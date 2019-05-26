//
// Created by Popa0 on 5/26/2019.
//

#ifndef UNTITLED_TRIANGLE_H
#define UNTITLED_TRIANGLE_H


#include "Isosceles.h"

class Triangle : public Isosceles{

public:

    int side3;

    Triangle(int side, int side2, int side3);

    int perimeter() override;
    double aria() override;
};


#endif //UNTITLED_TRIANGLE_H
