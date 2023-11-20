#include <iostream>
using namespace std;
#include "superNode.h"

int main(){
    // declare a treeNode dynamically (on the heap)
    // call this node "root" (with value 4)
    treeNode* root = new treeNode(4);

    root->left = new treeNode(7);
    root->right = new treeNode(16);

    root->right->right = new treeNode(3);
}