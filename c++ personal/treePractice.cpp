#include <iostream>
using namespace std;
#include "treePracticeR.h"


int main(){
    // Create your own tree
    // to add a node to where it belongs after the root
    treeNode* root;
    treeNode* temp;

    root->insertTreeNode(temp, 6);
    root->insertTreeNode(temp, 8);
    root->insertTreeNode(temp, 5);
    root->insertTreeNode(temp, 18);
    root->printTree(temp);

}