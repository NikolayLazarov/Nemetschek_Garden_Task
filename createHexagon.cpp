#include "createHexagon.h"
#include <iostream>
#include "userInputCheckerDouble.h"

Shape* createHexagon(){
  double * dataPointer = NULL;

  double xCord,yCord, rotation,sideLine;

  cout<<"Hexagon location:"<<endl;
  
  cout<<"x: "<<endl;
  dataPointer = &xCord;
  userInputCheckerDouble(dataPointer);
  cout<<"y: "<<endl;
  dataPointer = &yCord;
  userInputCheckerDouble(dataPointer);
  
  cout<<"rotation:"<<endl;
  dataPointer = &rotation;
  userInputCheckerDouble(dataPointer);
  cout<<"side: "<<endl;
  dataPointer = &sideLine;
  userInputCheckerDouble(dataPointer);
  
  return new Hexagon(xCord,yCord,rotation,sideLine);

}