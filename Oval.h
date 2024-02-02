#include "Shape.h"
using namespace std;
#pragma once

class Oval: public Shape{
  protected:
    double radiusX;
    double radiusY;
    //rotation;

  public:
    Oval();
    Oval(double xCord, double yCord, double rotation, double radiusXAxis, double radiusYAxis);

    double getRadiusX();
    double getRadiusY();

    double area();

};