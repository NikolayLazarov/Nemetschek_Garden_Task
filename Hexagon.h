#include "Shape.h"
#include "Plant.h"
using namespace std;
#pragma once

class Hexagon: public Shape, public Plant{
  protected:
    double side;

  public:
    Hexagon();
    Hexagon(double xCord, double yCord, double rotation, double sideLength);

    double getSide();

    double area();

};