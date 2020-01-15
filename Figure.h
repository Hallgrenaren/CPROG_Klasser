//
// Created by Martin on 1/15/2020.
//

#ifndef CPROG_KLASSER_FIGURE_H
#define CPROG_KLASSER_FIGURE_H

#include <string>


class Figure {
public:
    virtual double getArea() = 0;
    std::string getName() { return name; };
protected:
    explicit Figure(std::string n): name(n){};
private:
    std::string name;
};


#endif //CPROG_KLASSER_FIGURE_H
