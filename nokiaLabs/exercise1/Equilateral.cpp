//
// Created by Popa0 on 5/26/2019.
//

#include <cmath>
#include "Equilateral.h"

Equilateral::Equilateral(int side) : side(side){

}

int Equilateral::perimeter() {
    return side * 3;
}

double Equilateral::aria() {
    return side * side * sqrt(3) / 4;
}

