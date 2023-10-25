#include <iostream>
using namespace std;

#include "DNode.h"

int main(){
    DNode* head = new DNode(10);

    // Create a new node linked to the head node
    head->next = new DNode(2);

    // Link Node 2 to Node 10
    (head->next)->prev = head;

    // TASK: Insert a Node(3) in between 2 and 10
    // Make the new Node (assign with temp pointer)
    DNode* temp = new DNode(3);

    // Connect temp *back* to head
    temp->prev = head;

    // Connect temp *forward* to Node 2
    temp->next = head->next;
    
    // Connect head *forward* to Node 3
    head->next = temp;

    // Connect Node 2 *back* to temp
    (head->next->next)->prev = temp;

    // Make a "tail" pointer
    DNode* tail = head->next->next;

    int num;
    cout<<"Please enter new value for Node"<<endl;
    cin>>num;

    // Create new Node
    temp = new DNode(num);
    
    // 2 connections to make
    tail->next = temp;
    temp->prev = tail;

    // move "tail"
    tail = tail->next;

    // use a loop to assign numbers 50-99 and add them to the list
    for(int i = 50; i < 100; i++){
        temp = new DNode(i);

        tail->next = temp;
        temp->prev = tail;

        tail = tail->next;
    }

    // print the entire list

    // start
    temp = head;

    // continue condition
    while(temp != nullptr){
        cout<<temp->data<<" ";
        
        // Update (move ptr forward by 1)
        temp = temp->next;
    }
    cout<<endl;

    // Iterate through the list and stop at Node 89
        // Print up to 89
    temp = head;

    // continue condition
    while(temp != nullptr){
        cout<<temp->data<<" ";
        if(temp->data == 89){
            // remove the next node (90)
            (temp->next->next)->prev = temp;
            (temp->next) = temp->next->next;
            
            break;
        }
        // Update (move ptr forward by 1)
        else{
            temp = temp->next;
        }
    }
    cout<<endl;


}