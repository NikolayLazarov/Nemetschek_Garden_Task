#include <iostream>
#include "Triangle.h"
#include "cmath"
using namespace std;

Triangle::Triangle(){
  side = 1;
}

Triangle::Triangle(double xCord, double yCord, double rotation, double sideLength){
  centralPoint = Point(xCord, yCord);
  rotationAngle = rotation;
  side = sideLength;
}

double Triangle::getSide(){
  return side;
}

double Triangle::area(){
  return pow(side,2)*sqrt(3)/4;
}

