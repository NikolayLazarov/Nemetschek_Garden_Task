#include "Garden.h"
#include "Circle.h"
#include "Shape.h"
#include "checkQuantityCircles.h"
#include "checkQuantityHexagon.h"
#include "checkQuantityOvals.h"
#include "checkQuantityTriangels.h"
using namespace std;

Garden::Garden(double widthGarden, double lengthGarden, double rotation){
  width = widthGarden;
  length = lengthGarden;
  rotationAngle = rotation;
  centralPoint = Point(width/2,length/2);
  sizeListPlants = 1;
  listPlants = new Shape*[sizeListPlants];
  currentPlants = 0;

}

void Garden::resizeListPlants(){
  Shape **resize = new Shape*[sizeListPlants *2];
  for (int i = 0; i< sizeListPlants; i++){
      resize[i] = listPlants[i];
  }
  delete [] listPlants;
  listPlants = resize;
  sizeListPlants *=2;
}

bool Garden::addPlant(Shape *plant){
  if (currentPlants == sizeListPlants){
    resizeListPlants();
  }
  
  listPlants[currentPlants] = plant;
  currentPlants++;
  return true;
}

  int Garden::checkQuantityPlants(Shape *plant, string typePlant){
    int quantity;
    if (typePlant == "circle"){
        quantity = checkQuantityCircles(width,length,plant->getRadius());
    }else if (typePlant == "hexagon"){
      quantity = checkQuantityHexagon(width,length, plant->getSide());
    }else if (typePlant == "Oval"){
      quantity = checkQuantityOvals(width,length,plant->getRadiusX(),plant->getRadiusY());
    }else if (typePlant == "Triangle"){
      quantity = checkQuantityTriangels(width,length,plant->getSide());
    }  
    return quantity;
  }

void Garden::deleteData(){
  for (int i = 0; i<currentPlants;i++){
    delete listPlants[i];
  }
}

Garden::~Garden(){
  deleteData();
  delete [] listPlants;
}

void Garden::printGarden(){
  for (int i = 0; i<currentPlants; i++ ){
    cout<<(*listPlants[i]).area()<<endl;
  }
}