#include <iostream>
#include "Point.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
using namespace std;
#pragma once

class Garden: public Rectangle {
  private:
  void resizeListPlants();

  protected:
  Circle *listPlants;
  int sizeListPlants;
  int currentPlants;
  
  
  public:
  Garden();
  // Garden(double xCord, double yCord, double rotation, double width, double length);
  Garden(double width, double length, double rotation);

  double freeArea();
  bool addPlant(Circle *plant);

  void printGarden();

  // double checkIfPlantFits(Plant plant);
  ~Garden();
  
};
