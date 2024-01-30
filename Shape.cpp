#include <iostream>
#include "Shape.h"
using namespace std;

Shape::Shape(){
  centralPoint = Point();
  rotationAngle = 0;
}

Shape::Shape(double x, double y, double rotation){
  centralPoint = Point(x,y);
  rotationAngle = rotation;
};

Point Shape::getCentralPoint(){
  return centralPoint;
}

double Shape::getRotationAngle(){
  return rotationAngle;
}
