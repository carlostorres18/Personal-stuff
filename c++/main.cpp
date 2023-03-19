// Determine if a statement is true

// Ask the user for 2 numbers
    // if the second number is a multiple of the first, we will show a value of 1
    // if not, we show a value of 0

// take the input

// give the expression (true or false)
    // Ex: n1 = 48 and n2 is 96
    // operators * + - %

#include <iostream>
using namespace std;

int main(){
    int n1;
    int n2;

    cout<<"Please enter your 2 numbers: "<<endl;
    cin>> n1;
    cin>> n2;

    cout<<(n2 % n1 == 0)<<endl;

    // True / False statements
    
    // 1. Print 1 if n1 is greater than 2
    cout<<(n1 > n2)<<endl;

    // 2. Print 1 if n2 is greater than n1 AND (&&) n2 is less than 2*n1
                // in Math class: n1 < n2 < 2*n1
    cout<<(n1 < n2 && n2 < 2*n1)<<endl;
    // 3. Print 1 if n1 is equal to 5 or 6 or 7 or 18 (||)
    cout<<(n1 == 5||n1 == 6||n1 == 7||n1 == 18)<<endl;

    // ask the user for their name
        // if their name is "Peter", say "Hello, Peter!"
        string name;
        cout<<"Please enter your name: "<<endl;
        cin >> name;

    // the IF/ELSE statements
    if (/* T/F statement */ name == "Peter") {
        // DO SOMETHING
        cout<<"Hello, Peter!"<<endl;
    }

    // if n1 is an odd number, print "That's odd..."
        // otherwise, print "now we're even."

    if (n1 % 2 == 1){

        cout<<"That's odd..."<<endl;

    }
    else {
        cout<<"now we're even."<<endl;
    }


    // Create a menu option for a combo
    cout<<"Thank you for your order! Would you like fries and sode?"<<endl;
    cout<<"Enter 1 for yes and 2 for no" << endl;
    // take input for their option
    int input1;
    cin>>input1;

    if(input1 == 1){
        // combo
        cout<<"Here is your combo, enjoy your meal!"<<endl;
    }
    else{
        // no combo
        cout<<"OK, enjoy your burger!"<<endl;

    }
    








}