// Write a program that will take in a number
    // if the num is divisible by 3, print "fizz"
    // if the num is divisible by 5, print "buzz"
    // if the num is divisible by both, print "fizz-buzz"
    // otherwise, print the number
#include <iostream>
using namespace std;

int main(){
    int num;
    
    cout<<"Please enter a number: "<<endl;
    cin>>num;

    if(num % 3 == 0 && num % 5 == 0){
        cout<<"fizz-buzz"<<endl;
    }
    else if(num % 5 == 0){
        cout<<"buzz"<<endl;
    }
    else if(num % 3 == 0){
        cout<<"fizz"<<endl;
    }
    else{
        cout<<num<<endl;
    }
}