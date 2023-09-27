#include <iostream>
using namespace std;

int main(){
    int myArray[10];
    int x;

    for(int i = 0 ; i < 10; i++){
        myArray[i] = 10*i;
    }

    // declare a pointer to hold the address of first element of myArray
    // declare a pointer to the 4th element of the array
    int *p, *q;
    p = myArray;
    q = (myArray + 4);

    // what is the output?
    cout<<*(p + 2)<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;

    // print out the values from 5th to 1st element using q
    cout<<*q<<" "<<*(q - 1)<<" "<<*(q - 2)<<" "<<*(q - 3)<<" "<<*(q - 4)<<endl;

    for(int i = 0; i < 5; i++){
        cout<<*(q - i)<<endl;

    }

    for(int* i = q; i != (p-1); i--){
        cout<<*i<<" ";
    }
    cout<<endl;
    for(int * i = q - 3; i <= q; i++){
        cout << "i: " << *i << endl;
        // cout<<*q - i<<endl;
    }
    cout<<endl;

    for(int i = 0; i < 5; i++){
        cout<<*q<<" ";
        q--;
    }
    cout<<endl;

    // declare an array of 20 integers dynamically
    int *arrPtr = new int[20];

    // use the pointer to fill the array with multiples of 7
        // 0 7 14 21 28
            // second value of array = 7
                // *(arrPtr + 3) = 21;
    for(int i = 0; i < 20; i++){
        *(arrPtr + i) = i * 7;
        
    }
    int *tempPtr = arrPtr;
    
    arrPtr = new int[21];





}