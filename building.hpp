#ifndef BUILDING_H
#define BUILDING_H

#include "elevator.hpp"
#include <vector>

class Building {
public:
    Building(int numFloors, int numElevators);

private:
    int numElevators;
    int numFloors;
    std::vector<Elevator> vec;

};

#endif 