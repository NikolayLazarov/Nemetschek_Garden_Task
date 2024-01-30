#include "Shape.h"
using namespace std;

class Hexagon: Shape{
  protected:
    double side;

  public:
    Hexagon();
    Hexagon(double xCord, double yCord, double rotation, double sideLength);

    double getSide();

    double area();

};