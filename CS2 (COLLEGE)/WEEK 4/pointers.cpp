#include <iostream>
using namespace std;

int main(){
    int a; // an integer object
    bool b;
    int* ptrToA;        // address of an integer object (pointer)
    bool* ptrToBool;
    int myArray[5] = {5, 10, 15, 20, 25};

    a = 10;
    ptrToA = &a; // this holds the address of a;

    cout<<a<<endl;
    cout<<"ptrToA: "<<ptrToA<<endl;

    // pointers in arrays
    cout<<myArray<<endl;
    cout<<myArray[0]<<endl;

    // declare a pointer that holds the address myArray
    int* myPtr = myArray;
    // starts of myArray
    cout<<myArray<<endl;
    cout<<myPtr<<endl<<endl;

    // 2nd value of myArray;
    cout<<&myArray[1]<<endl;
    cout<<(++myPtr)<<endl<<endl;


}