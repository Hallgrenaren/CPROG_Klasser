//
// Created by Martin on 1/15/2020.
//

#include "Triangle.h"

Triangle *Triangle::create(int h, int b) {
    return new Triangle(h, b);
}

Triangle::Triangle(int h, int b) : CorneredFigure("Triangle"), h(h), b(b) {

}

int Triangle::getCorners() {
    return 3;
}

double Triangle::getArea() {
    // Cast result of multiplication to a double and divide with a double to avoid loss of precision
    return double(b*h)/2.0;
}
