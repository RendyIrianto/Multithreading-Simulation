#include "building.hpp"
#include "elevator.hpp"
#include <iostream>
#include <string>

using namespace std;


int main() {

    int request;
    
    cout << "Enter floor: ";
    cin >> request;

    Elevator e1(1);
    e1.addRequest(request);
    thread t(&Elevator::run, &e1);
    t.join();
    


    
    



    return 0;
} 
