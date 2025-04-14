#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    

    Node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BST
{
    public:
        Node* root;

    BST(){
        root = nullptr;
    }

    Node* insert (Node* node, int value){
        if(node == nullptr){
            return new Node(value);
        }

        if (value < node->data){
            node->left = insert(node->left, value);
        }
        else if(value > node->data){
            node->right = insert (node->right, value);
        }
        return node;
    }

    void insert(int value){
        root = insert(root, value);
    }

    
};


int main(){
    BST tree;

    tree.insert(17);
    tree.insert(4);
    tree.insert(14);
}