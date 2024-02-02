#include "checkQuantityCircles.h"
#include "cmath"
int checkQuantityCircles(double aRect, double bRect, double radius){
  int circlesOnA = static_cast<int>(floor(aRect / (2 * radius)));

  int circlesOnB = static_cast<int>(floor(bRect / (2 * radius)));

  int totalCircles = circlesOnA * circlesOnB;

  return totalCircles;
}
