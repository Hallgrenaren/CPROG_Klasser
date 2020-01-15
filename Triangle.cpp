//
// Created by Martin on 1/15/2020.
//

#include "Triangle.h"

Triangle *Triangle::create(int h, int b) {
    return new Triangle(h, b);
}

Triangle::Triangle(int h, int b) : CorneredFigure("Triangle"), h(h), b(b) {

}

double Triangle::getArea() {
    return ((b*h)/2);
}

