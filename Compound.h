//
// Created by Martin on 1/15/2020.
//

#ifndef CPROG_KLASSER_COMPOUND_H
#define CPROG_KLASSER_COMPOUND_H

#include <vector>
#include "Figure.h"
#include "CorneredFigure.h"

class Compound : public Figure{
public:
    static Compound* create(std::string n);
    // Remember override
    double getArea() override;
    void addFigure(Figure *f);
    int getSumOfCorners();
    //~Compound(); tänkte ha en destruktor för att ta bort alla figurer som är i denna, men står inte i uppgiften, så skitsamma
private:
    explicit Compound(std::string n);
    std::vector<Figure*> vec;
    std::string name;
};


#endif //CPROG_KLASSER_COMPOUND_H
