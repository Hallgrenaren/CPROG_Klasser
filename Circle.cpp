//
// Created by Martin on 1/15/2020.
//

#include "Circle.h"

Circle *Circle::create(int r) {
    return new Circle(r);
}

Circle::Circle(int r) : Figure("Circle"), r(r){

}

double Circle::getArea() {
    return 3.14*(r*r);
}