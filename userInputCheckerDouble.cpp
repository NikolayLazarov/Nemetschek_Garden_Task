#include "userInputCheckerDouble.h"
#include <iostream>

using namespace std;

bool userInputCheckerDouble(double *data){    
    while (true){
      try{
        if (cin>>*data){
        return true;
      }else{
        throw "Incorrect data. Please enter a number";
      }
      }catch (const char* msg){
        cout<<msg<<endl;
      }
      
    }
}