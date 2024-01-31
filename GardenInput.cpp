#include "GardenInput.h"

using namespace std;

Garden userinputGarden()
  {
  while (true){
    bool exceptionFlag = false;
    
    double width;
    double length;
    double rotationAngle;

    try{  
      cout<<"Garden:"<<endl;
      cout<<"Enter width: "<<endl;

      // if (checkUserInputGarden(*width) == false && *width == NULL){
      //   cout<<"good";
      // }
      // if (width < 0){
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
      // }
      
      // if (length < 0){
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
      // }
      

      cout<<"Enter rotation angle: "<<endl;

      while (true){
          if (cin >> rotationAngle) {
            break;   
        } else {
          throw "Invalid input. Please enter a valid double.";
        }
      }

    }catch (const char* msg){
      cerr << msg <<endl;
      //  cout <<  <<endl;
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
