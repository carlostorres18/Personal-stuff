// Write a program that will complete the following
    // 1. Take in an input number from the user
    // 2. Print the absolute value of that number (without using math functions)
#include <iostream>
using namespace std;

int main(){
    // float num;
    
    // cout<<"Input a number: "<<endl;
    // cin>>num;

    // if(num < 0){
    //     // change the negative to positive
    //     num = -1 * num;
    // }
    // cout<<num<<endl;

    // x is not divisible by n - i will get a remainder when i divide x/n
    // x % n != 0

    int num;
    
    cout<<"Please enter a number: "<<endl;
    cin>>num;

    if(num % 2 != 0){
        cout<<"number is not even, enter a second value: "<<endl;
        cin>>num;
    }
    else if(num > 100){
        // first print the remainder
        cout<< num % 5 <<endl;
        // overwrite num with num / 5
        num = num / 5;
    }
    else{
        cout<<100 - num<<endl;
    }



}