// Define a class
//SizingArray
    // attributes
        // list of integers
        // constant integer to define the size of the list
        
        // constructor
            // create an integer array of {size} integers

        // method - addVal()
            // input: some integer to add to array
            // *should output an error if the array is full

#include <iostream>
using namespace std;

class Monkey{};

class SizingArray{
    public:
    int* arr;
    int size;
    int* currentVal; // some variable address that changes as we fill

    SizingArray(int inSize = 3){
        size = inSize;
        arr = new int[size]; // Create new array and save the address
        currentVal = arr; // start at first index of Array
    }
    // initial array is {nothing, nothing, nothing}
        // after myArray.addVal(7); {7, nothing, nothing};
        // after myArray.addVal(18); {7, 18, nothing};
        // after myArray.addVal(2); {7, 18, 2};
        // after myArray.addVal(6); prints "ERROR! Array is full!" 
    void addVal(int newVal){
        if(currentVal == (arr + size)){
            cout<<"ERROR! cannot insert "<<newVal<<" array is FUll!"<<endl;
        }
        else{
            *currentVal = newVal; // assign the value to current slot
            currentVal++; // move to the next index/slot
        }
        
    }
    void print(){
        for(int* i = arr; i < currentVal; i++){
            cout<<*i<<" ";
        }
        cout<<endl;
    }

    // removeVal() method
        // should remove the last item added to the stack
            // myArray.removeVal()
                // print "6"
                // myArray - {7, 18, nothing}

            // *Avoid going to an invalid location
    void removeVal(){
        if(currentVal == arr){
            cout<<"Stack is empty! Cannot remove value."<<endl;
        }
        else{
            // currentVal points to the currently *unused* slot
            // if we want to print the previous value, step back first
            currentVal--;
            // now print the value
            cout<<*currentVal<<endl;
        }
    }

};
