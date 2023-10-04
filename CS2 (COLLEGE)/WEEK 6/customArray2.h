#include <iostream>
using namespace std;

class MyStack{
    private: 
        string *items;
        int capacity;
        int numItems;

    public: 
        MyStack(int x = 5){
            items = new string[x];
            capacity = x;
            numItems = 0;
        }

        void push(string inObj){
            if(numItems == capacity){
                // Stack is full;
                cout<<"ERROR, STACK IS FULL!!!"<<endl;

                // 1. make a slightly larger array
                string *oldArray = items;
                items = new string[capacity + 2];

                capacity+=2; // bookkeeping
                // use numItems to copy oldArray stuff to items
                for(int i = 0; i < numItems; i++){
                    items[i] = oldArray[i];
                }

                // remove the oldArray
                delete[] oldArray;
            }
            // put inObj in the first slot
            items[numItems] = inObj;
            numItems++; // we now have one more item in items stack  

            
        }
        bool empty(){
            if(numItems == 0){
                return true;
            }
            else{
                return false;
            }
        }

        string pop(){
            // decrease my numItems
            numItems--;
            // return the previously filled value(top of the stack)
            return items[numItems];
        }

        int getNumItems(){
            
        }
};