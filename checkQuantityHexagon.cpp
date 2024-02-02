#include "checkQuantityHexagon.h"
#include <cmath>
int checkQuantityHexagon(double aRect, double bRect, double sideHex){
    int hexagonsOnA = static_cast<int>(floor(aRect / (sqrt(3) * sideHex)));

    int hexagonsOnB = static_cast<int>(floor(bRect / (2 * sideHex)));

    int totalHexagons = hexagonsOnA * hexagonsOnB;

    return totalHexagons;
}