#include <iostream>
#include "Shape.h"
#include "Plant.h"
using namespace std;
#pragma once

class Circle: public Shape, public Plant{
  protected:
    double radius;
  
  public:
    Circle();
    Circle(double x, double y, double rotation, double r);
  
    double getRadius();
  
    double area() override;



};