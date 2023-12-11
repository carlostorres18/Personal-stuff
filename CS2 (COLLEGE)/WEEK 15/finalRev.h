#include <iostream>
using namespace std;

// Define a class for a dynamic array "queue"
    // for stack, we have first in, last out
    // for queue, we have first in, first out

// for our class we should have
    // pointer to the dynamic allocated array of integers
    // numItems
    // capacity

// define a constructor for a new queue
    // input: 1 value to add to the array
    // initial capacity should be 3
    // array will contain 1 item to start

class Queue{
    public: 
        // attributes here
        int* arr;
        int numItems;
        int capacity;

        // constructor here
        Queue(int valToAdd){
            capacity = 3;
            // initialize dynamic array
            arr = new int[capacity];
            // add the items to the array
            arr[0] = valToAdd;
            // set numItems to 1
            numItems = 1;
        }

        // define a method push that will add values to the queue
            // input: a new value to add to queue
            // CASE1: Queue is not full
                // add value to the next available space
            // CASE2: Queue is FULL
                // increase capacity of the queue by 2
                // print a message that the queue is being increased
                // add value to the next available space

        void push(int valueToAdd){
            // queue is not full
            if(numItems < capacity){
                // add the value
                    // value goes in index that matches the number of items
                arr[numItems] = valueToAdd;

                // update the number of items
                numItems++;
            }
            // queue is full
            else{
                // STEP 0: Print message to confirm
                cout<<"QUEUE IS FULL! Increasing Queue size..."<<endl;
                // STEP 1: increase "capacity" attribute by 2
                capacity += 2;

                // STEP 2: use new capacity to make a larger dynamic array
                    // step 2a: save address of the old array
                int* temp = arr;
                // 2b: Make the larger array
                arr = new int[capacity];
                // *new array is empty
                // old array has my values
                // 2c: copy the old values into the new array (one by one)
                for(int i = 0; i < capacity - 2; i++){
                    arr[i] = temp[i];
                }
                // STEP 3: add value to the array
                arr[numItems] = valueToAdd;
                numItems++;
            }
        }

        // define a method to print the queue
        void print(){
            for(int i = 0; i < numItems; i++){
                cout<<arr[i]<<" ";

            }
            cout<<endl;
        }

        // define method pop() which will remove items
            // from the first item added
            // EX Queue: 0 41 67 34 0 69 24 78 58 62 64
            // pop() should return 0 (first in queue)
            // new Queue: 41 67 34 0 69 24 78 58 62 64 
        void pop(){
            if(numItems > 0){
                int poppedItem = arr[0];

                for(int i = 0; i < numItems - 1; i++){
                    arr[i] = arr[i + 1];
                }
                numItems--;

                cout<<"Popped item: "<<poppedItem<<endl;
            }
            else{
                cout<<"Queue is empty, cannot pop."<<endl;
            }
        }
};