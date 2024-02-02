#include <iostream>
#include "Point.h"
#include "Shape.h"
using namespace std;
#pragma once

class Triangle: public Shape{
  protected:
    double side;

  public:
    Triangle();
    Triangle(double xCord, double yCord, double rotation, double sideLength);
  
    double getSide();

    double area();
};