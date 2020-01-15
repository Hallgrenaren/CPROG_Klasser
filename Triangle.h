//
// Created by Martin on 1/15/2020.
//

#ifndef CPROG_KLASSER_TRIANGLE_H
#define CPROG_KLASSER_TRIANGLE_H

#include "CorneredFigure.h"

class Triangle : public CorneredFigure{
public:
    // Don't leave out override when overriding. It's not just style. It's rather important.
    double getArea() override;

    // Never override a virtual method using an inline. The pointer is needed anyway so nothing
    // is gained by declaring it in the header.
    int getCorners() override;
    static Triangle* create(int h, int b);
private:
    Triangle(int h, int b);
    int h;
    int b;
};


#endif //CPROG_KLASSER_TRIANGLE_H
