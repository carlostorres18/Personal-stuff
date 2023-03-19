/*  1. Write a c++ program that has no instructions
    2. Enable the use of input and output tools
    3. declare 3 objects:
        - an integer value
        - a message
        - another message
    */
    
#include <iostream>
using namespace std;

int main (){

    int value;
    string msg, anotherMsg, yetAnotherMsg;  //You can make them in a list

    //The assignment operator

    value = 15;

    //Store the message "hello" in message
    //Store the message "goodbye" in anotherMsg
    //Assign the message stored into anotherMsg to msg
    //Print anotherMsg and msg

    msg = "hello";
    anotherMsg = "goodbye";
    // msg = anotherMsg; (control forward slash)
    
    // change the msg and anotherMsg values. You create a 3rd box

    yetAnotherMsg = anotherMsg; //copies goodbye into a 3rd box
    anotherMsg = msg; //copies hello into goodbye's box
    msg = yetAnotherMsg; //copies yetAnotherMsg's box into msg box

    cout<<"After assignments: \n"<<msg<<endl;
    cout<<anotherMsg<<endl;

    
    // Changing a number value
    // Assign value with a value that is 1 greater than before.
    cout<<value<<endl;
    value = value + 1;

    cout<<value<<endl;




}


