//
// Created by Popa0 on 5/26/2019.
//

#include <iostream>
#include "Shape.h"

using namespace std;

Shape::Shape(int side) : side(side){

}

void Shape::write() {

    cout << "perimeter: " << perimeter() << "\n";
    cout << "aria: " << aria() << "\n";

}
