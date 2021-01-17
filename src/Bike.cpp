#include "Bike.h"

#include <chrono>
#include <iostream>
#include <random>
#include <thread>

using namespace std::chrono_literals;

Bike::Bike(const std::string &name) : mName(name) {}

// return false when road is over
bool Bike::pedal(const Road &road) {
  for (unsigned i = 0; i < road.getRoadLength(); ++i) {
    std::cout << " ";
    if (i == mPosition) {
      std::cout << mTop << mName;
    }
  }
  std::cout << std::endl;

  for (unsigned i = 0; i < road.getRoadLength(); ++i) {
    std::cout << " ";
    if (i == mPosition) {
      std::cout << mMiddle;
    }
  }
  std::cout << std::endl;

  for (unsigned i = 0; i < road.getRoadLength(); ++i) {
    if (i < mPosition) {
      std::cout << ".";
    } else if (i == mPosition) {
      std::cout << mBottom;
    } else if (i > mPosition + 7) {
      std::cout << ".";
    }
  }
  std::cout << std::endl;

  // Condition is at the end because we want to keep a road even when done
  // - 7 (size of the bike bottom) -1 (we need to stop now not new iteration)
  if (mPosition >= road.getRoadLength() - 8) {
    return false;
  }

  static std::random_device r;
  static std::mt19937 generator(r());
  std::poisson_distribution<int> distribution(1.0);
  mPosition += distribution(generator);

  return true;
}

void Bike::run(const Road &road) {
  std::system("clear");
  while (pedal(road)) {
    std::this_thread::sleep_for(50ms);
    std::system("clear");
  }
}
