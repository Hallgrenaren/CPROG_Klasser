//
// Created by Martin on 1/15/2020.
//

#ifndef CPROG_KLASSER_TRIANGLE_H
#define CPROG_KLASSER_TRIANGLE_H

#include "CorneredFigure.h"

class Triangle : public CorneredFigure{
public:
    double getArea();
    int getCorners(){return 3;};
    static Triangle* create(int h, int b);
private:
    Triangle(int h, int b);
    int h;
    int b;
};


#endif //CPROG_KLASSER_TRIANGLE_H
