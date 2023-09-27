#include <iostream>
using namespace std;

int main(){
    int* first;
    first = new int;

    int* second;

    *first = 26;                // f: 26 s: no address
    second = first;             // f: 26 s: 26
    *second = *second + 8;      // f: 34 s: 34
    second = new int;           // f: 34 s: no value at new address
    *second = *first - 7;       // f: 34 s: 27

}