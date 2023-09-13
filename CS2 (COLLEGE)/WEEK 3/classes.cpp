// Classes
    // 1. Definition
    // 2. Declaration
    // 3. Access

// Bring in your class definition
#include <iostream>
using namespace std;
#include "classesReview.h"

int main(){
    // 2. Declare an object of the TV class
    TV myNewTv;
    TV anotherTV;

    // 3. Access myNewTV and set the size to 75
    myNewTv.size = 75;

    // 3. Print the size of the TV
        // dot operator (.) to access a member
    cout<<myNewTv.size<<endl;

    // access private?
    // myNewTv.poweredOn = true; // nope NOT ALLOWED!

    // access method
    myNewTv.power();
    myNewTv.power();
    myNewTv.power();
    
}