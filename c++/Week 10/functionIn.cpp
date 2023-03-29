#include <iostream>
#include <cmath>

using namespace std;


// Write a function favNum() that will return your favorite number
int favNum(){
    return 18;
}

// write a function nothing() that returns nothing

void nothing(){
    return;
}

// Write a function name() that returns your name
    // also print "starts with a vowel if first letter of name is a vowel"
string name(){
    string myName = "Carlos";
    if(myName.at(0) == 'A' || myName.at(0) == 'E'||myName.at(0) == 'I'||myName.at(0) == 'O'||myName.at(0) == 'U'){
        cout<<"Starts with a vowel"<<endl;
    }
    return myName;
}

// Write a function that takes 2 numbers from the console and returns
    // return a / b

int div(){
    int num1, num2;
    cout<<"Please enter 2 numbers for division: "<<endl;
    cin>>num1>>num2;


    // check if num2 is 0;
    if(num2 == 0){
        cout<<"No! Don't divide by zero."<<endl;
        return -1;
    }
    return num1 / num2;
}

// Write a function that will greet a user by name
    // input parameter is a string "name"
        // goes in the parenthesis of the function
    // no console input, no hard coding

void sayHi(string name){
    cout<<"Hello, "<<name<<"!"<<endl;

    return;
}

// Write a function mult() that will take 2 input parameters
    // a and b, and will return the product of these 2 numbers

int mult(int a, int b){
    return a*b;
}

// Write a function that adds 1 to a number, returns nothing
void addOne(int a){
    a++;
    return;
}


// Execute this function in main()

int main(){
    int x;
    x = favNum();
    cout<<x<<endl;

    cout<<name()<<endl;
    // cout<<div()<<endl;
    sayHi("Fredward");
    int answer;
    answer = mult(9, 6);
    cout<<answer;

    addOne(answer); // the scope wont reach the mult() since mult() already did its own thing;

    nothing(); // no cout here? void can be used to display messages since it doesnt need anything in return;
    
    return 0;
}