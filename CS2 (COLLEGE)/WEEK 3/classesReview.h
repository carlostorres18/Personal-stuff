#include <iostream>
using namespace std;

// 1. Define a simple class, TV
    // Add attributes (all public)
        // size(inches)
        // make(Sony, etc.)
        // Yes/No is 4k?
    // private attribute
        // Yes/No poweredOn?
    // define a method power
        // input: None
        // output: message
        // returns: nothing
        // should power on the TV and print a confirmation messgae
        // if the TV is on, should power off, with a message


class TV{
    // attributes
    private:
        bool poweredOn;
    public: 
        int size;
        string make;
        bool fourK;

        // method for power
        void power(){
            if(poweredOn){
                poweredOn = false;
                cout<<"The TV is off!"<<endl;
            }
            else{
                poweredOn = true;
                cout<<"The TV is on!"<<endl;
            }
        }

};