#include "checkQuantityOvals.h"
#include <cmath>
int checkQuantityOvals(double aRect, double bRect, double r1, double r2){

  int ovalsOnA = static_cast<int>(floor(aRect / (2 * r1)));

  int ovalsOnB = static_cast<int>(floor(bRect / (2 * r2)));

  int totalEllipses = ovalsOnA * ovalsOnB;

  return totalEllipses;

}