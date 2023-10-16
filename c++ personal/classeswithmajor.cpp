#include <iostream>
using namespace std;
#include "majorclass.h"

int main(){
    // Student student1(92101, "Carlos", "Calculus");
    Student student2(92101, "Carlos", "ComputerScience");

    // student1.display();
    student2.display();

    Course Cal("Cal 1", "MATH");
    Student Carlos(92101, "Carlos", "Calculus");
    Carlos.registerForSubject(Cal);

}