#ifndef BIKE_H
#define BIKE_H

#include <string>

#include "Road.h"

class Bike {
public:
  Bike() {}
  Bike(const std::string &name);
  bool pedal(const Road &road);
  void run(const Road &road);

private:
  unsigned mPosition = 0;
  std::string mName;
  std::string mTop = "  __o ";
  std::string mMiddle = "_ \\<_";
  std::string mBottom = "(_)/(_)";
};

#endif // BIKE_H
