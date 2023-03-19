// GOAL: Write a  for loop that achieves the same task as out challenge
// Just print all the even numbers

#include <iostream>
using namespace std;

int main(){
    int max;
    int x = 0; //Initilization

    cin>>max;
    //  Continue contidition: x has not reached 30
    while(x < max){
        cout<<x<<" "; // <---- BODY
        x+=2; // Update statement: Add 2 to x on each iteration
    }
    cout<<endl;

    // FOR LOOP
    // for(INITIALIZATION ; CONTINUE CONDITION ; UPDATE STATEMENT ;) { BODY } 3 instructions

    for( int i = 0; i < max; i+=2){
        cout<<i<<" ";
    }
    cout<<endl;

    // Write a loop that starts from 100 and counts down to zero
        // at every 10(90, 80, 70...) dont print the number, print "NEXT"
    // At the end, print "BLAST-OFF!"


    for(int a = 100; a > 0; a-=1){
        if(a % 10 == 0){
            cout<<"NEXT ";
        }
        else{
            cout<<a<<" ";
        }
    }
    cout<<"BLAST-OFF!"<<endl;

    // Write a loop that will print this
    // *
    // **
    // ***
    // 

    // Task 1:
    x = 1; 
    for(int b = 0; b < x; b++){
        cout<<"*"<<endl;
        for(int h = 0; h < 2; h++){
        cout<<"*";
        }
    }
    cout<<endl;
    // TASK 2: print j number of stars
    for(int j = 0; j < 5; j++){
        cout<<"*";
    }
    cout<<endl;
}