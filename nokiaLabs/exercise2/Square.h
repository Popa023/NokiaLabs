//
// Created by Popa0 on 5/26/2019.
//

#ifndef UNTITLED_SQUARE_H
#define UNTITLED_SQUARE_H


#include "Shape.h"

class Square : public Shape {

public:

    Square(int side);

    int perimeter() override;
    double aria() override;

};


#endif //UNTITLED_SQUARE_H
