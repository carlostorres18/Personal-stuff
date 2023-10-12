class Node{
    public:
        int data;
        Node* next;

        // Define a constructor
            // default value for data is zero, but can be function input
            // "next" always initializes with nullptr;
        Node(int something = 0){
            data = something;
            next = nullptr;
        }
};