// Pointers
#include <iostream>
using namespace std;

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};

    // Declare a pointer to an integer
    // its not an object, but a pointer that holds integer data
    int* myPtr = nullptr;
    int x;
    string name = "Bobby";
    // declare a ptr called "ptr1" to the variable that holds "Bobby"
    string* ptr1 = &name;


    // store the address of x in myPtr
        // trying to assign something to myPtr
        // myPtr = address of x
    myPtr = &x; // & is reference to x (its address)

    // assign the address of the 2nd value of "arr" to myPtr
    myPtr = &arr[1];

    // dereference (* operator)
    // use "ptr1" to read the string at that address
    cout<<"Name is: "<<*ptr1<<endl;

    // use dereference to go to address stored in ptr1
        // and set the string value to be "NOTBobby"
    *ptr1 = "NOTBobby";
    cout<<"Name is: "<<*ptr1<<endl;




    cout<<x<<endl;
    cout<<myPtr<<endl;
}