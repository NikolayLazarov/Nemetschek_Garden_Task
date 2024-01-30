#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Triangle.h"
#include "Hexagon.h"
#include "Oval.h"
#include "Garden.h"
using namespace std;

int main(){

  Point point1 = Point(1,2);
  cout<<"point "<<point1.getX()<<" , "<<point1.getY()<<endl;
  
  Circle circle1 = Circle(4,5, 180,23);
  cout<< circle1.area() <<endl;

  Triangle triangle1 = Triangle(3,4, 150,4);
  cout<<triangle1.area()<<endl;
  
  Hexagon hexagon1 = Hexagon(4,5,230,3);
  cout<<hexagon1.area()<<endl;

  Oval oval1 = Oval(3,4,90,3, 5);
  cout<<oval1.area()<<endl;

  Garden garden = Garden(5,5,180);
  cout<<garden.area()<<endl;

}