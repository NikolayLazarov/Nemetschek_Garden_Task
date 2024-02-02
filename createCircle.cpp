#include "createCircle.h"
#include <iostream>
#include "userInputCheckerDouble.h"

Shape * createCircle(){
  double * dataPointer = NULL;

  double xCord,yCord, rotation,radius;

  cout<<"x: "<<endl;
  dataPointer = &xCord;
  userInputCheckerDouble(dataPointer);
  
  cout<<"y: "<<endl;
  dataPointer = &yCord;
  userInputCheckerDouble(dataPointer);
  cout<<"rotation:"<<endl;
  
  dataPointer = &rotation;
  userInputCheckerDouble(dataPointer);
  cout<<"radius:"<<endl;
  
  dataPointer = &radius;
  userInputCheckerDouble(dataPointer);
  // Shape * pointer = new Circle(1,1,1,1); 

  Shape * pointer = new Circle(xCord,yCord,rotation,radius); 
  return pointer;

}