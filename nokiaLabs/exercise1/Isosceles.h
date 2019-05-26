//
// Created by Popa0 on 5/26/2019.
//

#ifndef UNTITLED_ISOSCELES_H
#define UNTITLED_ISOSCELES_H


#include "Equilateral.h"

class Isosceles : public Equilateral {

public:

    int side2;

    Isosceles(int side, int side2);

    int perimeter() override;
    double aria() override;

};


#endif //UNTITLED_ISOSCELES_H
