// Warm up (IO)
    //Ask the user their name
    // Print out a greeting to the user by name

#include <iostream>
using namespace std;

int main (){
    string name;
    
    cout<<"Hello, what is your name?"<<endl;

    cin>>name;

    cout<<"Greetings my fellow coder, "<<name<<endl;


// Variables and Expressions
    // Declare
    float myNum;
    double alsoNum;

    // Initialize
    myNum = 3.14;

    // Access
    cout<<myNum/3<<endl;
        // Access alsoNum and assign it with the value of myNum.
        alsoNum = myNum;

    //Update (Assign)
        // Ex1 - Assign myNum with 10 more than itself
        myNum = myNum + 10;
        cout<<"myNum: "<<myNum<<endl;
        cout<<"alsoNum: "<<alsoNum<<endl;

        // Ex2 - Assign myNum with double the value of alsoNum - 7
       myNum = 2 * (alsoNum - 7); 
       cout<<"myNum: "<<myNum<<endl;

        // Won't work, because "=" is is assignment, not equals!
            // myNum / 2 = alsoNum - 7;



    
}