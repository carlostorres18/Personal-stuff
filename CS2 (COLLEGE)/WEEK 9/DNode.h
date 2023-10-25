// Define a class DNode
    // integer data to store
#include <iostream>
using namespace std;

class DNode{
    public: 
        int data;
        DNode* prev;
        DNode* next;

        DNode(int inData){
            data = inData;
            prev = nullptr;
            next = nullptr;
        }

};