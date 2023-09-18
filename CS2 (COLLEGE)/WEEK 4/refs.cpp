// References

#include <iostream>
using namespace std;

// write a function that will increase the value of x by 1
    // and return x


// pass by value - creates a copy, does nto affect original object
int addOne(int anything){
    anything++;
    return anything;
}

// pass by REFERENCE - works with the address of the object
void addOneForReal(int &anything){
    anything++;
}

// What will be the value of x, y, z?
    // executed as arithmetic(x, y, z)
        // x: 8 ---> 8
        // y: 10 --> 3
        // z: 2 ---> 2
void arithmetic(int a, int &b, int c){
    a = a + b; // 18 10 2
    b -= c;    // 18 8 2
    c++;       // 18 8 3
    b = c;     // 18 3 3
}
// b is the only one that actually changes, because we access the address of the value and change it, the other ones don't change

int main(){
    int x = 7; // declare an object to the stack

    // address where x is stored
    cout<<"value of x: "<<x<<endl;
    cout<<"address of x: "<<&x<<endl;

    addOne(x);
    cout<<"Value of x after addOne(): "<<x<<endl;

    addOneForReal(x);
    cout<<"Value of x after addOneForReal(): "<<x<<endl;


    int y = 10, z = 2;
    arithmetic(x, y , z);
    
    cout<<"x: "<<x<<" y: "<<y<<" z: "<<z<<endl;

}