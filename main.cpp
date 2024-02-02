#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Triangle.h"
#include "Hexagon.h"
#include "Oval.h"
#include "Garden.h"
#include "createGarden.h"
#include "userInputPlantType.h"
#include "createPlant.h"
using namespace std;

int main(){


   Garden *gardenPointer =  new Garden(createGarden());

   Shape *shapePointer = NULL;

  cout<<gardenPointer->area() <<endl;

    string typePlant = userInputPlantType();

    shapePointer = createPlant(typePlant);

    int quantity = gardenPointer->checkQuantityPlants(shapePointer,typePlant);
    cout<<typePlant<<" "<<quantity<<endl;
    double areaAll = shapePointer->area() *quantity;
    
    double percentagePlantsOfGarden = areaAll/gardenPointer->area()*100;
    cout<<"Plants of Garden Percentage: "<< percentagePlantsOfGarden<<endl;

    delete gardenPointer;

}
