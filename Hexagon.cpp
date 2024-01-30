#include "Hexagon.h"
#include "cmath"
using namespace std;

Hexagon::Hexagon(){
  side = 1;
}

Hexagon::Hexagon(double xCord, double yCord, double rotation, double sideLength){
  centralPoint = Point(xCord,yCord);
  rotationAngle = rotation;
  side = sideLength;
}

double Hexagon::getSide(){
  return side;
}

double Hexagon::area(){
  return pow(side,2)*3*sqrt(3)/2;
}
