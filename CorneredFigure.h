//
// Created by Martin on 1/15/2020.
//

#ifndef CPROG_KLASSER_CORNEREDFIGURE_H
#define CPROG_KLASSER_CORNEREDFIGURE_H


#include "Figure.h"

class CorneredFigure : public Figure{
public:
    // Remove unnecessary repeat of pure virtual getArea() (it's in the super class)
    // virtual double getArea() = 0;
    virtual int getCorners() = 0;
protected:
    explicit CorneredFigure(std::string n): Figure(n){};
};


#endif //CPROG_KLASSER_CORNEREDFIGURE_H
