#include <iostream>
using namespace std;

// Define a class for a Linked List Node

class LLNode{
    public:
    string data;
    // address of the next LLNode
    LLNode* nextNode;
};


int main(){
    // make a node
    LLNode* first = new LLNode;

    // put some data inside
    first -> data = "Hello";

    LLNode* second = new LLNode;
    second -> data = "Goodbye";

    first -> nextNode = second;
}