#ifndef RACE_H
#define RACE_H

#include <vector>

#include "Bike.h"

class Race {
public:
  Race(const Road &road, std::vector<Bike> bikes);

private:
  const Road &mRoad;
  std::vector<Bike> mBikes;
};

#endif // DISPLAY_H
