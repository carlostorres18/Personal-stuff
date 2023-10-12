#include <iostream>
using namespace std;

#include "Node.h"

int main(){
    // use dynamic allocation to create a brand new Node
    Node* first = new Node(2);

    // use the arrow operator -> to access members from a pointer
    first -> data = 3; // Changes the data value from 2 to 3

    // make a second Node with the value 7
    Node* last = new Node(7);

    // link first and last nodes
    first ->next = last;

    // print the data from last using only first pointer
    cout<<first->next->data<<endl;

    // create a new node with a 0
    Node* realLast = new Node();

    // link it
    last->next = realLast;

    // reassing 0 to 4 using the first pointer
    first->next->next->data = 4;

    // make a new node without declaring a new pointer
    realLast->next = new Node(11);

    // move the "realLast" pointer to the actual last Node
    realLast = realLast->next;

    // remove the 4 Node
    delete last->next;

    // re-link the nodes 
    last->next = realLast;

}