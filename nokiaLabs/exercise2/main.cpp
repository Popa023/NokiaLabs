#include <iostream>
#include "Triangle.h"
#include "Square.h"
#include "Hexagon.h"


using namespace std;

int main() {

    Triangle tr(5,5,5);
    tr.write();
    Square sq(5);
    sq.write();
    Hexagon he(5);
    he.write();
}