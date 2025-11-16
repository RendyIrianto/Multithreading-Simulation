#include "elevator.hpp"
#include <iostream>

Elevator::Elevator(int id): currentState(State::Idle), currentFloor(0), id(id){}

int Elevator:: getCurrentFloor() const {
    return currentFloor;
}

Elevator::State Elevator:: getCurrentState() const {
    return currentState;
}

void Elevator:: run() {
    return;
}

std::ostream& operator<<(std::ostream& os, const Elevator& e) {
    os << "Elevator " << e.id << " on floor " << e.currentFloor << std::endl;
    return os;
}

std::ostream& operator<<(std::ostream& os, const Elevator::State& s) {
    switch(s) {
        case Elevator::State::Idle: 
            os << "Idle" << std::endl;
            break;
        case Elevator::State::MovingUp:
            os << "Moving Up" << std::endl;
            break;
        case Elevator::State::MovingDown:
            os << "Moving Down" << std::endl;
            break;
        case Elevator::State::DoorsOpen: 
            os << "DoorsOpen" << std::endl;
            break;
        case Elevator::State::DoorsClosed:
            os << "DoorsClosed" << std::endl;
            break;
    }
    return os;
}