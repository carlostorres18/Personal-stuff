#include <iostream>
using namespace std;

#include "SingleNode.h"

int main(){
    SingleNode* head = new SingleNode(1);

    // Use the head node and link 2, 3, and 4 node in the list
    // head -> ?
    SingleNode* temp = new SingleNode(2);
    head -> next = temp;

    // create the 3 node
    temp -> next = new SingleNode(3);

    // move "temp" to the end
    temp = temp -> next;

    //Create the 4 node 
    temp -> next = new SingleNode(4);
    
    // move "temp" to the end
    temp = temp -> next;

    // move temp
    temp = head -> next;


    // move next pointer from Node 2 to Node 3
    head -> next = head -> next -> next;

    // start from head and print all the values in the list
    SingleNode* currentPtr = head;

    // loop
    while(currentPtr != nullptr){
        cout<<currentPtr -> data<<" ";
        currentPtr = currentPtr -> next;
    }
    cout<<endl;

    // step 1: link Node 2 to node 4
    temp -> next = head -> next -> next;

    // link Node 3 to Node 2
    head -> next -> next = temp;

    // print the list again to verify
    currentPtr = head;
    while(currentPtr != nullptr){
        cout<<currentPtr -> data<<" ";
        currentPtr = currentPtr -> next;
    }
    cout<<endl;

    cout<<currentPtr->data<<endl;

     
    

}