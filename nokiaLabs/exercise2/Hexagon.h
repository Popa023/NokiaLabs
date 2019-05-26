//
// Created by Popa0 on 5/26/2019.
//

#ifndef UNTITLED_HEXAGON_H
#define UNTITLED_HEXAGON_H


#include "Shape.h"

class Hexagon : public Shape{

public:

    Hexagon(int side);

    int perimeter() override;
    double aria() override;

};


#endif //UNTITLED_HEXAGON_H
