#ifndef SHAPES_H
#define SHAPES_H

namespace shapes{
    class Square {
        private:
        double sideLength;
        public:
        Square ();
        Square(double side);

        ~Square();

    };
    class Triangle{
        private:
        double base;
        double height;
        public:
        Triangle();
        Triangle(double b, double h);
        ~Triangle();
        double getBase() const;
        double getHeight() const;

  };
  class circle{
    private:
    double radius;
    public:
    circle();
    circle(double r);
    ~circle();
    double getRadius() const;

  };
}

#endif