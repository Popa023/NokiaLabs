#include <iostream>
#include "Equilateral.h"
#include "Isosceles.h"
#include "Triangle.h"

using namespace std;

void write(Equilateral* p){

    cout << "perimeter: " << p->perimeter() << "\n";
    cout << "aria: " << p->aria() << "\n";

}

int main() {

    Equilateral eq(5);
    Isosceles is(5,8);
    Triangle tr(5, 6, 7);
    write(&eq);
    write(&is);
    write(&tr);

}