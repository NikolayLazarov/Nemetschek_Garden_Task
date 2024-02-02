#include "checkQuantityTriangels.h"
#include <cmath>

int checkQuantityTriangels(double aRect, double bRect, double side){
    int trianglesOnA = static_cast<int>(floor(aRect / (side * sqrt(3) / 2)));
    
    int trianglesOnB = static_cast<int>(floor(bRect / (1.5 * side)));

    int totalTriangles = trianglesOnA * trianglesOnB;

    return totalTriangles;
}