// Node for a linked list
class Node{
    public: 
        // a value (an integer)
        int data;

        // a pointer to the next node
        Node* next;

        // make a constuctor that: 
            // takes input parameter for the data
            // make a default value of 0
            // sets the next ptr to nullptr
        Node(int inData = 0){
            data = inData;
            next = nullptr;
        }
};