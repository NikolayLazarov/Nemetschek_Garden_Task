#include "Garden.h"
#include "Circle.h"
using namespace std;

// Garden::Garden();

Garden::Garden(double widthGarden, double lengthGarden, double rotation){
  width = widthGarden;
  length = lengthGarden;
  rotationAngle = rotation;
  centralPoint = Point(width/2,length/2);
  sizeListPlants = 1;
  listPlants = new Circle[sizeListPlants];
  currentPlants = 0;

}

void Garden::resizeListPlants(){
  Circle *resize = new Circle[sizeListPlants *2];
  for (int i = 0; i< sizeListPlants; i++){
      resize[i] = listPlants[i];
  }
  delete [] listPlants;
  listPlants = resize;
  sizeListPlants *=2;
}

bool Garden::addPlant(Circle *plant){
  //check if it fits -> if not false
  //if true:
  
  if (currentPlants == sizeListPlants){
    resizeListPlants();
  }
  
  listPlants[currentPlants] = *plant;
  currentPlants++;
  return true;
}

Garden::~Garden(){
  delete [] listPlants;
}

void Garden::printGarden(){
  for (int i = 0; i<currentPlants; i++ ){
    cout<<listPlants[i].area()<<endl;
  }
}