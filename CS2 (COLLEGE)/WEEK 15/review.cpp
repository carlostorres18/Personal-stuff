// Queue
#include <iostream>
using namespace std;
#include "finalRev.h"

int main(){
    // Declare a new Queue
    Queue myQ(0);

    myQ.print();

    for(int i = 0; i < 10; i++){
        // add random values to the Queue
        myQ.push(rand() % 100);
        myQ.print();
    }
    myQ.pop();
    myQ.print();

}