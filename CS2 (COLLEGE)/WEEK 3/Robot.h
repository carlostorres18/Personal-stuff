#include <iostream>
using namespace std;

// Define a Robot class

// Private attributes
    // name of robot
    // battery level
    // status: "happy", "sad"...

    // public methods
        // no inputs
        // no returns
    // write a method to display the information of the robot
    
    // write a method charge()
        // input charging amount(5, 10, 15,...)
    // increase the battery level by the charging amount
        // should be capped at 100
    // if battery level after charging is above 80%
        // set status to "happy"
        // use the display method to print the info

class Robot{
    private: 
        string name;
        int battery;
        string status;

    public: 
        void display(){
            cout<<"Robot Info:"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Battery: "<<battery<<endl;
            cout<<"Status: "<<status<<endl;
        }

        void charge(int charge = 10){
            battery += charge;
            // new batt value
            if(battery > 100){
                battery = 100;
            } 

            if(battery >= 80){
                status = "Happy";
            }
            // display the info of the robot
            display();
        }


        // CONSTRUCTOR
            // name of the method is *same name as the class*
            // Constructor *CANNOT* return values
                // no return type! (not even void)
            Robot(string inName, int inBattery, string inStatus = "sleepy"){
                // set initial values for attributes
                // take an input parameter for name and status
                name = inName;
                battery = inBattery;
                status = inStatus;
            }

};