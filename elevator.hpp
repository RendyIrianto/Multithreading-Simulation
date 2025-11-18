#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <iostream>
#include <string> 

class Elevator {
public:
    enum class State { 
        Idle, 
        MovingUp, 
        MovingDown, 
        DoorsOpen,
        DoorsClosed 
    };

    Elevator(int id);
    //~Elevator();
    
    //Getters
    int getCurrentFloor() const;
    State getCurrentState() const;

    //Setters
    void setCurrentState(State s);
    
    //Elevator functions
    void moveUp();
    void moveDown();
    
    //Elevator thread functions
    void run();

    //Friend keyword allows for certain functions or classes to access public or private members
    friend std::ostream& operator<<(std::ostream& os, const Elevator& e);
    friend std::ostream& operator<<(std::ostream& os, const Elevator::State& s);

private:
    int id;
    int currentFloor;
    State currentState;
    std::mutex m;        
    std::queue<int> requests;

};

#endif
