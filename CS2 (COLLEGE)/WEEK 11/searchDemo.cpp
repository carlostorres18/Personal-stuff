#include <iostream>
using namespace std;

#include "Searches.h"

int main(){
    int myArray[100];

    // fill the array
    for(int i = 0; i < 100; i++){
        myArray[i] = rand() % 500;
        cout<<myArray[i]<<" ";
    }
    cout<<endl;

    cout<<largestLoc(myArray, 100)<<endl;


}