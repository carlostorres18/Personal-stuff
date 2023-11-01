#include <iostream>
using namespace std;

void countdown(int num){
    for(int i = num; i >= 0; i--){
        cout<<num<<" ";
        num--;
    }
    cout<<endl;
}

void rCountdown(int num){
    // BASE CASE
        // Case when start is zero
        if(num == 0){
            // print zero and stop
            cout<<num<<endl;
            return;   
        }

        // if value is less than zero, do nothing
        else if(num < 0){
            // do nothing
            return;
        }

    // GENERAL CASE

        else{
            // print my starting value
            cout<<num<<" ";
            // print the remaining values
            rCountdown(num - 1);
        }
}

int rLargest(int arr[], int length, int startIndex){
    // BASE case
        // start from the last value
    if(startIndex == length-1){
        // we only have one number
            // by default is the largest number
        return arr[startIndex];
    }

    // RECURSIVE case
    else{
        // STEP 1: return the largest of a and b
        int a = arr[startIndex];
        int b = rLargest(arr, length, startIndex + 1);
        if(a > b){
            return a;
        }
        else{
            return b;
        }
        // STEP 2: do the rest
    }


}

void largest(int list[], int length, int startIndex){
        // BASE case
    if(startIndex == length - 1){
        // We are staring at the last index (length - 1)
        // STEP 1: print the last number
        cout<<list[startIndex]<<endl;
        // STEP 2: go home
        return;
    }

    // alternatively
    else if(startIndex >= length){
        // STEP 1: go home
        return;
    }
    else{
        // RECURSIVE case
        // STEP 1: print the 1st value (at startIndex)
        cout<<list[startIndex]<<" ";
        // STEP 2: print the rest of the numbers in the array
            // starting from the next index (startIndex + 1)
        largest(list, length, startIndex + 1);
    }


}
    