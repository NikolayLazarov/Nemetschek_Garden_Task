#include "createOval.h"
#include <iostream>
#include "userInputCheckerDouble.h"
using namespace std;

Shape * createOval(){
  double * dataPointer = NULL;
  
  double xCord,yCord, rotation,radiusXAxis, radiusYAxis;

  cout<<"Circle location:"<<endl;
  cout<<"x: "<<endl;
  dataPointer = &xCord;
  userInputCheckerDouble(dataPointer);
  
  cout<<"y:"<<endl;  
  dataPointer = &yCord;
  userInputCheckerDouble(dataPointer);

  cout<<"rotation angle:";
  dataPointer = &rotation;
  userInputCheckerDouble(dataPointer);

  cout<<"radiusXaxis:"<<endl;
  dataPointer = &radiusXAxis;
  userInputCheckerDouble(dataPointer);
  cout<<"radiusYAxis"<<endl;

  dataPointer = &radiusYAxis;
  userInputCheckerDouble(dataPointer);
  Shape * pointer = new Oval(xCord,yCord,rotation,radiusXAxis,radiusYAxis);
  return pointer;

}