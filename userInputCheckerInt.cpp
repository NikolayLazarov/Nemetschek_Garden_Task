#include "userInputCheckerInt.h"
#include <iostream>
using namespace std;

bool userInputCheckerInt(int *data, int min, int max){    
    while (true){
      try{
        if (cin>>*data){
        if (min<*data && *data>max){
          throw "Incorrect data. Please enter a valid option";
        }
        return true;
      }else{
        throw "Incorrect data. Please enter a number";
      }
      }catch (const char* msg){
        cout<<msg<<endl;
      }
      
    }
}