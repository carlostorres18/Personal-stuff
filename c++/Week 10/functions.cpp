#include<iostream>
#include<cmath>
using namespace std;

// user-defined functions
    // int main() {} function 
    // defined functions (#include <cmath>)
        // sqrt(), pow(), etc...

// 1. Define

// Define a function main() that prints hello
    // and returns a 92

int hello(){ //dataType nameOfFunc()
    cout<<"Hello"<<endl; // code to run

    return 92; // return statement
}

// define a function loop() that will print "Hello" 5 times in a loop
    // return the message"goodbye"

string loop(){
    for(int i = 0; i < 5; i++){
        cout<<"hello"<<endl;
    }
    return "goodbye";

}

// Define a function sum() that will return the sum of 2 numbers
    // ask the user for the numbers

int sum(){
    int num1;
    int num2;
    cout<<"Please enter 2 values: "<<endl;

    cin>>num1>>num2;

    return (num1 + num2);
}

// define a function isEven() that will ask the user for a number
    // and return true if the number is even, return false otherwise
        // bool function will allow true and false

bool isEven(){
    int a;
    cout<<"Please enter a number: "<<endl;
    cin>>a;

    if(a % 2 == 0){
        return true; // a is divisible by 2, so it's even
    }
    else{
        return false;
    }
}

// Define a function congrats() that will print "congratulations"
    // and will return NOTHING, void functions return nothing;

void congrats(){
    cout<<"congratulations"<<endl;

    return;
}



// 2. Execute
int main(){
    int x;

    x = hello();
    cout<<x<<endl;

    int y = sum();

    cout<<y<<endl;

    cout<<isEven();
    cout<<endl;

    congrats();
    // hello(); //execute the hello() function
    
    // cout<<endl;

    // cout<<loop();
    // cout<<endl;

    // // execute the sqrt() function on 81
    // cout<<sqrt(81);

    return 0;
}