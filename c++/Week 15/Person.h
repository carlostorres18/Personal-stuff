// Define a class Person
    // make everything public
    // attributes: name, birthYear, child
    // constructor: set the name and birthyear with input parameters
    // no (nullptr) children to start
#include <iostream>
using namespace std;

class Person{
    public:
        string name;
        int birthYear;
        Person* child;

        Person(string inName, int inBY){
            name = inName;
            birthYear = inBY;
            child = nullptr;
        }

};

