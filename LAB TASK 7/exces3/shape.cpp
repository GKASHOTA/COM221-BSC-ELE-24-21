#include "shapes.h"
namespace shapes{
    Square::Square() : sidelength(0){}
    Square::Square(double side) : sidelegth(side){}
    Square::~Square(){}
    double Square::getsideLenght() const{
        return sideLength;
    }
    Triangle::Triangle() : base(0), height(0){}
    Triangle::Triangle(double b, double h) : base(b), height(h){}
    Triangle::~Triangle(){}
    double::getBase() const{
        return base;
    }
    double::getHeight() const{
        return height;
    }
    circle::circle() :radius(0){}
    circle::circle(double r) :radius(r){}
    circle::~circle(){}
    double circle::getRadius() const {
        ruturn radius;

    }
}

