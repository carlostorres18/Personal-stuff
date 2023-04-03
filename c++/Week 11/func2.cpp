#include <iostream>

using namespace std;

// Write a function that will take input parameter of an integer
    // increment the number by 3
    // call this function incNum()
    // return nothing

// RULE #1 - input
    // functions are "mini programs". They don't know anything
        // about the code outside.
// RULE #2 - output
    // you can send information out of the function by:
        // 1. using "return"
// Adavanced 1: default values (input)
// Advanced 2: pass by reference (don't copy the input)
    // & operator before variable name
    // the & symbol works with the original values/strings whatever.
void incNum(int &x){
    x += 3;
    return;
}

// Write a function that will take two string input parameters
    // str1 and str2
    // Swap the strings
        // EX: str1 = "Larry"
            // str2 = "Sara"
            // after function str1 = "Sara", str2 = "Larry"
void swap(string &str1, string &str2){
    // create a temp holder
    string temp = str1;
    str1 = str2;
    str2 = temp;
    return;
}
int main(){
    int x = 16;
    cout<<"before function: "<<x<<endl;
    incNum(x);
    cout<<"after function: "<<x<<endl;

    string name1 = "Larry";
    string name2 = "Sara";
    cout<<"Before function: "<<name1<<" "<<name2<<endl;
    swap(name1, name2);
    cout<<"After function: "<<name1<<" "<<name2<<endl;
}