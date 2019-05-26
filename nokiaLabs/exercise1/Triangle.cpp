//
// Created by Popa0 on 5/26/2019.
//

#include <cmath>
#include "Triangle.h"

Triangle::Triangle(int side, int side2, int side3) : Isosceles(side, side2), side3(side3) {

}

int Triangle::perimeter() {
    return side + side2, side3;
}

double Triangle::aria() {
    double p = (side + side2 + side3) / 2;
    return sqrt(p * (p - side) * (p - side2) * (p - side3));
}
