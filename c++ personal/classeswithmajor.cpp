#include <iostream>
using namespace std;
#include "majorclass.h"

int main(){
    Course math("Math 101", "Mathematics");
    Course physics("Physics 101", "Physics");

    Student alice(1012, "Alice", "Mathematics");
    Student bob(92101, "Bob", "Physics");

    math.addToSection(alice.getID(), alice.getMajor());
    physics.addToSection(bob.getID(), bob.getMajor());

    Manager manager;
    manager.addCourse(math);
    manager.addCourse(physics);

    manager.enrollStudent(alice);
    manager.enrollStudent(bob);

    cout << "After dropping Bob from Physics course:" << endl;
    manager.drop(bob.getID());

    return 0;

}