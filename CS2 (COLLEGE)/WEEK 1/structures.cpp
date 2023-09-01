// Loops
// Branches

// Write a loop that starts at a number (900) counts down to -30 in increments of 10

#include <iostream>
#include <vector>
using namespace std;

int main(){
    srand(0);


    int num = 900;
    // for loop
    for(int i = 900; i >= -30; i -= 10){
        cout<<i<<endl;
    }
    cout<<endl;

    // while loop
    while(num >= -30){
        cout<<num<<endl;
        num-=10;
    }

    int x = 0;

    for(cout<<"Hi"; true; cout<<"Goodbye"){
        if(x > 10){
            break;
        }
        else{
            x++;
        }
    }

    

    // declare 3 decimal values;
    float num1, num2, num3;
    // declare 300 decimal values;
    float myVals[300];
    
    // assign each value in the array with a random number
        // if no random, use an incrementing value
    // use a loop!
        // first value, index 0
    for(int i = 0; i < 300; i++){
        myVals[i] = rand() % 10;
    }

}