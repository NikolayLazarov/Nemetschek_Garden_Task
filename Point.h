#include <iostream>
using namespace std;
#pragma once

class Point{
  private:
    int x;
    int y;
    
  public:  
    Point();
    Point(int xCord, int yCord);
    
    double getX();
    double getY();
};