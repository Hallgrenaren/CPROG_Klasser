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
        if(CorneredFigure* cfig = dynamic_cast<CorneredFigure*>(fig)){
            sum += cfig->getCorners();
        }
    }
    return sum;
}

Compound *Compound::create(std::string n) {
    return new Compound(n);
}

Compound::Compound(std::string n): Figure(n){}

/*Compound::~Compound() {
    vec.clear(); // kanske lägga till for-loop där jag förstör var o en eller nått.
}*/
