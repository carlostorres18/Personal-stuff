// Define a Node that can hold a number and connect to another node

class Node{
    public:
        int data;
        Node* next;
};

class SuperNode{
    public:
        int data;
        SuperNode* up;
        SuperNode* down;
        SuperNode* left;
        SuperNode* right;

};

class treeNode{
    public:
        int data;
        treeNode* left;
        treeNode* right;

        // add a constructor
            // input: value of the data for node
            // the pointers should be null to start
        treeNode(int inData = 0){
            data = inData;
            left = nullptr;
            right = nullptr;
        }
};