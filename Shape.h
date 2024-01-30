#include <iostream>
#include "Point.h"
using namespace std;
#pragma once

class Shape{
  protected:
    double rotationAngle;
    Point centralPoint;
  
  public:
    Shape();
    Shape(double x, double y, double rotation);

    double getRotationAngle();
    Point getCentralPoint();

    // virtual double area() = 0;
};