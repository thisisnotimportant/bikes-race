#ifndef ROAD_H
#define ROAD_H

class Road {
public:
  Road(unsigned roadLength);
  void show();

  unsigned getRoadLength() const { return mRoadLength; }

private:
  unsigned mRoadLength;
};

#endif // ROAD_H
