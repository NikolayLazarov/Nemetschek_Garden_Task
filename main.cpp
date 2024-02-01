#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Triangle.h"
#include "Hexagon.h"
#include "Oval.h"
#include "Garden.h"
#include "GardenInput.h"
#include "plantUserInput.h"
using namespace std;

Garden userinputGarden();

int main(){
   Garden *gardenPointer =  new Garden(userinputGarden());

  Shape *circlePointer = NULL;

  cout<<gardenPointer->area() <<endl;
  

  
  for (int i = 0; i <3;i++){
    cout<<"new"<<endl;
    circlePointer = new Circle(i,2*i,3*i,i); 
    gardenPointer->addPlant(circlePointer);
    
    circlePointer = new Hexagon(2,3,34,234);
    gardenPointer->addPlant(circlePointer);
    gardenPointer->printGarden();
  }
    gardenPointer->printGarden();

  delete gardenPointer;
  delete circlePointer;
  
  // Plant *plant1 = &circle1;

  // cout<<plant1->area();

  // Circle circle1 = Circle(4,5, 180,23);
  // cout<< circle1.area() <<endl;

  // Triangle triangle1 = Triangle(3,4, 150,4);
  // cout<<triangle1.area()<<endl;
  
  // Hexagon hexagon1 = Hexagon(4,5,230,3);
  // cout<<hexagon1.area()<<endl;

  // Oval oval1 = Oval(3,4,90,3, 5);
  // cout<<oval1.area()<<endl;

  // Garden garden = Garden(5,5,180);
  // cout<<garden.area()<<endl;

}
