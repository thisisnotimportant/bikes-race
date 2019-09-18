#include "Bike.h"
#include "Race.h"
#include "Road.h"

#include <vector>

int main() {
  Road road(150);

  Bike bike("");
  Bike bike2("");
  Bike bike3("");

  Race race(road, std::vector<Bike>{bike, bike2, bike3});
  return 0;
}
