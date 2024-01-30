#include <iostream>
#include "Point.h"
using namespace std;


Point::Point(){
  x = 0;
  y = 0;
}

Point::Point(int xCord,int yCord){
    x = xCord;
    y = yCord;
}

double Point::getX(){
  return x;
}

double Point::getY(){
  return y;

}
