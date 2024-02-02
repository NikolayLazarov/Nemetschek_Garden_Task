#include "createPlant.h"
#include "Shape.h"
#include "createCircle.h"
#include "createHexagon.h"
#include "createOval.h"
#include "createTriangle.h"
#pragma once

Shape * createPlant(string typePlant){
  if (typePlant == "circle"){
    
    return createCircle();
  }else if(typePlant == "oval"){
    return createOval();
  }else if (typePlant == "hexagon"){
    return  createHexagon();
  }else if (typePlant == "triangle"){
    return createTriangle();
  }
}