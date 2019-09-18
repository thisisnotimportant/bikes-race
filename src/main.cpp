#include "Bike.h"
#include "Road.h"

int main() {
  Road road(150);
  Bike bike("Foo");
  bike.run(road);

  return 0;
}
