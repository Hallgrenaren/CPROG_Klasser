#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Circle.h"
#include "Compound.h"

using namespace std;

int main() {
    Figure* f1 = Triangle::create(10,5);
    Figure* f2 = Triangle::create(10,5);
    Figure* f3 = Triangle::create(10,5);
    Figure* f4 = Circle::create(5);
    Compound* c1 = Compound::create("Tester");
    c1->addFigure(f1);
    c1->addFigure(f2);
    c1->addFigure(f3);
    c1->addFigure(f4);

    cout << f1->getArea() << endl;
    cout << f4->getArea() << endl;
    cout << c1->getSumOfCorners() << endl;
    cout << c1->getArea() << endl;


    return 0;
}
