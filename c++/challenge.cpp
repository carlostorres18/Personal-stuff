#include <iostream>
using namespace std;

int main(){
    // Write a program that will use a while loop
    // to print either input numbers from zero up to some input num
        // or odd numbers from zero up to some input num
    // EX. 30 1
        // 1 if we want odd numbers
        // zero if we want even numbers

    int max;
    bool odd;
    int x;

    cin>>max;
    cin>>odd;

    // start at zero (initialization)
    x = 0;
    // keep counting as long as we have not reached the maximum.
    // CASE 1: Print out even numbers (increase by 2 each time)

    if(odd != true){
        while(x < max){
        cout<<x<<" ";
        x+=2;
    }
    cout<<endl;
    }
    else{
        x++;
        while(x < max){
            cout<<x<<" ";
            x+=2;
        }
        cout<<endl;
    }
}