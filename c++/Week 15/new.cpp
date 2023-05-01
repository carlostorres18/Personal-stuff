#include <iostream>
using namespace std;
#include "Gorilla.h"
#include "Node.h"

int main(){
    // create some new objects (integer and 2 boolean objetcs)
    int* newInt = new int;
    bool* myBool = new bool;
    bool* notMyBool = new bool;
    bool* boolList = new bool[1000];
    // make Gorilla object
    Gorilla* newGo = new Gorilla;

    // use dereference operator * to set the values to anything
    *newInt = 100;
    cout<<*newInt<<endl;
    *myBool = false;
    *notMyBool = true;

    // dereferencing for class objects
        // these 2 lines are the same! the second one is better.
    (*newGo).weight = 100; 
    newGo->weight = 100;

    // delete objects
    delete newInt;
    delete myBool, notMyBool;
    delete[] boolList; // deletes the array
    delete newGo;

    // Create 3 Node objects (dynamically)
    Node* first = new Node(7);
    Node* second = new Node(14);
    Node* third = new Node(3);

    // "link" first to second nodes
    first->next = second; // first -> second
    second->next = third; // first -> second -> third

}