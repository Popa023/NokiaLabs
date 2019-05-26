//
// Created by Popa0 on 5/26/2019.
//

#ifndef UNTITLED_SHAPE_H
#define UNTITLED_SHAPE_H

class Shape {

public:

    int side;

    Shape(int side);

    virtual int perimeter() = 0;
    virtual double aria() = 0;
    void write();

};


#endif //UNTITLED_SHAPE_H
