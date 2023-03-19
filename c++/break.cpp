// Write a loop that will take an input value from the user repeatedly
    // Keep a total of all values the user enters
    // Stop when the total is greater than 100
        // if the user enters a -99, stop immediately
    // Print the total

#include <iostream>
using namespace std;

int main (){
    // initialize
    int num;
    int total = 0;

    cout<<"Please enter a value: ";
    cin>>num;
    cout<<endl;

    while(total < 100) {
        if(num % 2 != 0){
            cout<<"No odds! ";
            cin>>num;
            continue;
        }
        total += num;
        cout<<"Enter another value: ";
        cin>>num;
        // Stop if the value is -99
        if (num == -99){
            break;
        }
    }
    cout<<"Your total is "<<total<<endl;
}