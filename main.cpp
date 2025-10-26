#include "elevator.hpp"
#include <iostream>

using namespace std;

int main() {

    Elevator elevator(1);
    cout << elevator;

    cout << elevator.getCurrentState() << endl;


    return 0;
} 