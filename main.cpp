#include "building.hpp"
#include "elevator.hpp"
#include <iostream>
#include <string>

using namespace std;


int main() {

    int floors, elevators;
    cout << "Number of floors: ";
    cin >> floors;
    cout << "Number of elevators: ";
    cin >> elevators;

    Building building(floors, elevators);

    Elevator elevator(1);
    cout << elevator;

    cout << elevator.getCurrentState() << endl;


    return 0;
} 
