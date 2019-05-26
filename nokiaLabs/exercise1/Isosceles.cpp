//
// Created by Popa0 on 5/26/2019.
//

#include <cmath>
#include "Isosceles.h"

Isosceles::Isosceles(int side, int side2) : Equilateral(side), side2(side2) {

}

int Isosceles::perimeter() {
    return side * 2 + side2;
}

double Isosceles::aria() {
    return side2 * sqrt(4 * side - side2) / 4;
}


