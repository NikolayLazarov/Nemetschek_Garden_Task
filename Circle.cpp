#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include "Circle.h"
// #include "Shape.h"
using namespace std;

Circle::Circle(){
    radius = 1;
}

Circle::Circle(double x, double y, double rotation, double r) {
    centralPoint = Point(x,y);
    rotationAngle = rotation;
    radius = r;
}

double Circle::area(){
  return pow(radius,2) * M_1_PI;
}

double Circle::getRadius(){
  return radius;
}
