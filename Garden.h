#include <iostream>
#include "Point.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include <vector>
using namespace std;
#pragma once

class Garden: public Rectangle {
  private:
  void resizeListPlants();
  void deleteData();
  
  protected:
  Shape **listPlants;
  // vector<Shape *> listPlants; 
  int sizeListPlants;
  int currentPlants;
  
  
  public:
  Garden();
  // Garden(double xCord, double yCord, double rotation, double width, double length);
  Garden(double width, double length, double rotation);

  double freeArea();
  bool addPlant(Shape *plant);

  void printGarden();

  // double checkIfPlantFits(Plant plant);
  ~Garden();
  
};
