#include "Oval.h"
#include "cmath"

using namespace std;

Oval::Oval(){
  radiusX = 1;
  radiusY = 1;
}

Oval::Oval(double xCord, double yCord, double rotation, double radiusXAxis, double radiusYAxis){
    centralPoint = Point(xCord, yCord); 
    rotationAngle = rotation; 
    radiusX = radiusXAxis;
    radiusY = radiusYAxis;
}

double Oval::getRadiusX(){
  return radiusX;
}

double Oval::getRadiusY(){
  return radiusY;
}

double Oval::area(){
  return M_PI * radiusX * radiusY;
}