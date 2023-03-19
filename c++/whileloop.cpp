// Write a program that will take an input num from the user
    // if the number is negative, stop
    // otherwise, print the number
        // ask the user for another number, and save over the first number

#include <iostream>
using namespace std;

int main (){
    

    // while loop
        // initialization
        // continue condition
        // update statement

    // initialization (before the loop starts! any setup you need)
    int num;

    cout<<"Please enter a number: "<<endl;
    cin>>num;

    // continue condition
    while(num >= 0){
        cout<<num<<endl;
        cout<<"Please enter a number: "<<endl;
        // update statement (change the value of whatever is in your continue condition)
        cin>>num;
    }
    cout<<"Goodbye."<<endl;









    // write code to print out greetings to users based on their names
        // unless the user types in a name of " "
    // Initialization
    string name;
    cout<<"Please enter your name: "<<endl;
    cin>>name;

    // Continue condition
    while(name != "_"){
        cout<<"Hello, "<<name<<"!"<<endl;
        // Update statement
        cin>>name;
    }





    // Write code to print all number from zero up to 12
    int num2 = 0;

    // num2 increase by one?
    // continue condition
    while(num2 < 120){
        // update statement
        cout<< num2++ <<" ";
        
    }
    cout<<endl;

    // Print all letters from a - z
    char letter = 'a';

    // continue condition (MUST ALWAYS BE A T/F Statement)
    while(letter <= 'z'){
        // update condition
        cout<< letter <<" ";
        letter++;
    }
    cout<<endl;



}