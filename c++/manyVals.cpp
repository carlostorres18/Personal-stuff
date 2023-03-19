// Write code to take Input of 5 numbers
// Print out those numbers in reverse
    // Ex. 4, 6, 8, 10, 12
    // Out: 12 10 8 6 4
#include <iostream>
using namespace std;

int main(){
    // int num1, num2, num3, num4, num5;
    // cin>>num1>>num2>>num3>>num4>>num5;

    // cout<<num5<<" "<<num4<<" "<<num3<<" "<<num2<<" "<<num1;
    // cout<<endl;

    // Array of integers
    const int LENGTH = 500; //it holds 5 numbers now, the number between the [] is called an element
    int numbers[LENGTH];

    // Save a number to the first space in the numbers array
    // cin>>numbers[0];
    // // second space
    // cin>>numbers[1];
    // cin>>numbers[2];
    // cin>>numbers[3];
    // cin>>numbers[4];

    // Write a for loop that will print "cin" values to array
    for(int i = 0; i < LENGTH; i++){
        // cin>>numbers[i];
        // instead of input, save i to each space in numbers
        numbers[i] = i;
    }
    for(int i = LENGTH - 1; i >= 0; i--){
        cout<<numbers[i]<<" ";
    }
    cout<<endl;

    // print values in reverse
    // cout<<numbers[4]<<" ";
    // cout<<numbers[3]<<" ";
    // cout<<numbers[2]<<" ";
    // cout<<numbers[1]<<" ";
    // cout<<numbers[0]<<" ";

    cout<<endl;
}