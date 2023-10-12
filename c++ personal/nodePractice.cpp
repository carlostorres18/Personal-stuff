#include <iostream>
using namespace std;
#include "nodePrac.h"

int main(){
    Node* n;
    Node* t;
    Node* h;

    n = new Node;
    n -> data = 1; // this places a 1 on the data part of our Node
    t = n; // this is pointing to the n Node
    h = n; // this is pointing to the n Node

    // new n Node
    n = new Node; // this changes what our n pointer in pointing to, now its pointing to a new Node
    n -> data = 2; // this places a 2 on the data part of our Node
    t -> next = n; // since t is still poiting to the old Node of n it can access the next section and access the new n Node
    t = t -> next; // this will keep the new n Node 

    n = new Node; // creating a new Node
    n -> data = 3;
    t -> next = n;
    n = new Node;

}