// Write a program that will print all even numbers from 10 to 40
    // initialization
    // continue condition
    // update statement

#include <iostream>
using namespace std;

int main(){
    // initialize
    int num1 = 10;
    cin>>num1;

    while(num1 < 40){
        // if statement
        
        // what this loop should do
        cout<<num1<<" ";
        // update statement
        num1 += 10;

    }
    cout<<endl;



    // Write a program that will print a list on numbers
        // start from 2
        // continue as long as number is less than or equal to 2048
        // double the number each time
            // output: 2 4 8 16 32 64...

    int num = 2;
    cin>>num;

    while(num <= 2048){
        cout<<num<<" ";
        num = num * 2;
    }
    cout<<endl;


}