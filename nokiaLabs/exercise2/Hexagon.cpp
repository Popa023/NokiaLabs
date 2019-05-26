//
// Created by Popa0 on 5/26/2019.
//

#include <cmath>
#include "Hexagon.h"

Hexagon::Hexagon(int side) : Shape(side) {

}

int Hexagon::perimeter() {
    return 6 * side;
}

double Hexagon::aria() {
    return 3 * side * side * sqrt(3) / 2;
}
