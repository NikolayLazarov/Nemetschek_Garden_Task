#include "userInputPlantType.h"
#include <iostream>
#include "userInputCheckerInt.h"
#include <string>
using namespace std;

string userInputPlantType(){
  cout<<"Choose plant type:"<<endl
    <<"1 - circle;"<<endl
    <<"2 - hexagon"<<endl
    <<"3 - oval"<<endl
    <<"4 - triangle:"<<endl;
    
    int x;
    int *xP = &x;

    userInputCheckerInt(xP,1,4);

    switch (x){
      case 1: return "circle";
      case 2: return "hexagon"; 
      case 3: return "oval";
      case 4: return "triangle";
    }
}