#include "createGarden.h"
#include <iostream>
#include "userInputCheckerDouble.h"

using namespace std;

Garden createGarden()
  {
  while (true){
    bool exceptionFlag = false;
    
    double width, length, rotationAngle;
    double * dataPointer = NULL;
    
    try{  
      cout<<"Garden:"<<endl;
      cout<<"Enter width: "<<endl;

        while (true){
          if (cin >> width) {
            if (width < 0){
              throw " Invalid input. Negative parameters";
            }
            break;   
        } else {
          throw "Invalid input. Please enter a valid double.";
        }
      }
      
          cout<<"Enter length: "<<endl;
      while (true){
          if (cin >> length) {
            if (length < 0){
              throw " Invalid input. Negative parameters";
            }
            break;   
        } else {
          throw "Invalid input. Please enter a valid double.";
        }
      }
      
      cout<<"Enter rotation angle: "<<endl;
      dataPointer = &rotationAngle;

      userInputCheckerDouble(dataPointer);

    }catch (const char* msg){
      cerr << msg <<endl;
            cin.clear();
            while (cin.get() != '\n') ;
      exceptionFlag = true;
    }

    if (!exceptionFlag){
      return Garden(width,length,rotationAngle);
    }
  }
}

bool checkUserInputGarden(double &width){
  while (true){
      
          if (cin >> width) {
            return true;   
        } else {
          throw "Invalid input. Please enter a valid double.";
          return false;
        }
      }
}