#include <iostream>
#include "Point.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include <string>
using namespace std;
#pragma once

class Garden: public Rectangle{
  private:
  void resizeListPlants();
  void deleteData();
  
  protected:
  Shape **listPlants;
  int sizeListPlants;
  int currentPlants;
  
  
  public:
  Garden(double width, double length, double rotation);

  bool addPlant(Shape *plant);
  int checkQuantityPlants(Shape * plant, string type);

  void printGarden();

  ~Garden();
  
};
