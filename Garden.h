#include <iostream>
#include "Point.h"
#include "Shape.h"
#include "Rectangle.h"
using namespace std;
#pragma once

class Garden: public Rectangle {
  protected:
  // Plant listPlants;
  
  
  public:
  Garden();
  // Garden(double xCord, double yCord, double rotation, double width, double length);
  Garden(double width, double length, double rotation);

  double freeArea();
  double addPlant();

  // double checkIfPlantFits(Plant plant);
  
};
