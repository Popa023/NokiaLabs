//
// Created by Popa0 on 5/26/2019.
//

#include "Square.h"

Square::Square(int side) : Shape(side){

}

int Square::perimeter() {
    return 4 * side;
}

double Square::aria() {
    return side * side;
}
