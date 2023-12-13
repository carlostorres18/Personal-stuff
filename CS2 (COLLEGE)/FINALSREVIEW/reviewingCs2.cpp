// Create a singly linked list and print the values

#include <iostream>
using namespace std;

#include "reviewingCs2.h"


int main(){
    Student student1("Carlos", 3.89, "CS", "Sophomore");
    Student student2("amy");
    student1.updateGPA(3.95);
    student2.changeMajor("Business");

    student1.display();
    cout<<endl;
    student2.display();


}