#include "Road.h"

#include <iostream>

Road::Road(unsigned roadLength) : mRoadLength(roadLength) {}

void Road::show() {
  for (unsigned i = 0; i < mRoadLength; ++i) {
    std::cout << ".";
  }
  std::cout << std::endl;
}
