#include "Garden.h"
using namespace std;

// Garden::Garden();

Garden::Garden(double widthGarden, double lengthGarden, double rotation){
  width = widthGarden;
  length = lengthGarden;
  rotationAngle = rotation;
  centralPoint = Point(width/2,length/2);
}
