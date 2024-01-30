#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(){
  length = 1;
  width = 1;
}

Rectangle::Rectangle(double xCord, double yCord,double rotation, double widthRect, double lengthRect){
  centralPoint = Point(xCord,yCord);
  rotationAngle = rotation;
  length = lengthRect;
  width = widthRect;
}

double Rectangle::getLength(){
  return length;
}

double Rectangle::getWidth(){
  return width;
}

double Rectangle::area(){
  return width*length;
}
