#include "createTriangle.h"
#include <iostream>
#include "userInputCheckerDouble.h"

Shape* createTriangle(){
  double * dataPointer = NULL;

  double xCord,yCord, rotation,sideLength;

  cout<<"Triangle location:"<<endl;
  
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
  dataPointer = &sideLength;
  userInputCheckerDouble(dataPointer);
  
  return new Triangle(xCord,yCord,rotation,sideLength);

}