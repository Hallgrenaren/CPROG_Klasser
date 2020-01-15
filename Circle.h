//
// Created by Martin on 1/15/2020.
//

#ifndef HELLOWORLD_CIRCLE_H
#define HELLOWORLD_CIRCLE_H
#include "Figure.h"

class Circle : public Figure {
public:
    double getArea();
    static Circle* create(int r);
private:
    Circle(int r);
    int r;
};


#endif //HELLOWORLD_CIRCLE_H
