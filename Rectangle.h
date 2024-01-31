#include "Shape.h"
using namespace std;
#pragma once

class Rectangle: public Shape{
  protected:
    double length;
    double width;
  
  public:
    Rectangle();
    Rectangle(double xCord, double yCord, double rotation, double widthRect, double lengthRect);

    double getWidth();
    double getLength();

    double area();

};