#include <iostream>
using namespace std;
#include "Robot.h"

// Declare 2 robot objects
    // use the display() method of one object
    // use the charge() method of the second object


int main(){
    Robot myRobot1("Robot", 100, "angry"); // when we create Robot, constructor will run automatically
    Robot myRobot2("Robot", 9);
    

    myRobot1.display();
    myRobot2.charge(6);

}