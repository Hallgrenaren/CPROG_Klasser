//
// Created by Martin on 1/15/2020.
//

#include "Compound.h"

double Compound::getArea() {
    double sum = 0;
    for(Figure* fig:vec){
        sum += fig->getArea();
    }
    return sum;
}

void Compound::addFigure(Figure* f) {
    vec.push_back(f);
}

int Compound::getSumOfCorners() {
    int sum = 0;
    for(Figure* fig: vec){
        // Use auto.
        if(auto cfig = dynamic_cast<CorneredFigure*>(fig)){
            sum += cfig->getCorners();
        }
    }
    return sum;
}

Compound *Compound::create(std::string n) {
    return new Compound(n);
}

Compound::Compound(std::string n): Figure(n){}

// You must determine who owns what. If the Compound is an aggregation of figures (by containment), then it is
// the owner of those figures and should definitely delete all the instances.
/*Compound::~Compound() {
    vec.clear(); // kanske lägga till for-loop där jag förstör var o en eller nått.
}*/
