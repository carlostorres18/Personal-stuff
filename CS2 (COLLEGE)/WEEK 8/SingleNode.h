#include <iostream>
using namespace std;

class SingleNode{
    public:
        int data;
        SingleNode* next;

        SingleNode(int inData = 0){
            data = inData;
            next = nullptr;
        }
};