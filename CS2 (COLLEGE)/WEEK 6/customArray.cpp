#include <iostream>
using namespace std;
#include "customArray.h"

int main(){
    SizingArray myArray(3);
    myArray.addVal(7);
    myArray.addVal(18);
    myArray.addVal(6);

    myArray.print();
    myArray.removeVal();
    myArray.removeVal();
    myArray.removeVal();
    myArray.removeVal();
    myArray.removeVal();
    myArray.removeVal();

    myArray.addVal(2);
    myArray.addVal(22);


    myArray.print(); // print all the values in the array
    //dont't print unintialized values;
}