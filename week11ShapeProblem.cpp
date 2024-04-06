#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <memory>
#include <vector>


// Implement a class system to represent various
// geometric shapes and calculation of their area.

// Base class Shape:
// Contains the x and y coordinates of the shape's center.
// Declares the area() function to calculate area.
// Derived class Circle:
// Inherits Shape.
// Adds the radius property.
// Implements the area() function to calculate the area of a circle.
// Rectangle derived class:
// Inherits Shape.
// Adds width and height properties.
// Implements the area() function to calculate the area of a rectangle.

class Shape {
 protected:
  double x, y;

 public:
  Shape(double x = 0, double y = 0) : x(x), y(y) {}
  virtual double area() const = 0;
  virtual ~Shape() {};
};

class Circle : public Shape{
    protected:
     double r;

    public:
     Circle(double x, double y, double r):Shape(x, y){
        this -> r = r;
     }

     virtual double area() const{
        return M_PI * r * r;
     };

     virtual ~Circle(){};
};


class Rectangle : public Shape{
    protected:
     double w;
     double h;

    public:
     Rectangle(double x, double y, double w, double h):Shape(x, y){
        this -> w = w;
        this -> h = h;
    }

    virtual double area() const{
        return w * h;
    };

    virtual ~Rectangle(){};

};

int main()
{
    std::vector<Shape*> V;
    Rectangle a(5, 7, 3, 2);
    V.push_back(&a);
    for (int i = 0; i <= V.size(); i++)
    {
        double d = V[i]->area();
        std::cout << d << std::endl;
    }

    return 0;
}