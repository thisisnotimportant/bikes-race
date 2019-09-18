#include "Race.h"

#include <chrono>
#include <iostream>
#include <thread>

using namespace std::chrono_literals;

Race::Race(const Road &road, std::vector<Bike> bikes)
    : mRoad(road), mBikes(bikes) {
  std::system("clear");
  bool go = true;
  while (go) {
    int endCount = 0;
    for (auto &bike : bikes) {
      if (bike.pedal(road) == false) {
        ++endCount;
      }
      std::cout << std::endl;
    }
    if (endCount == bikes.size()) {
      go = false;
    }
    std::this_thread::sleep_for(65ms);
    std::system("clear");
  }
}