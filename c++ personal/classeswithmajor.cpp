#include <iostream>
using namespace std;
#include "majorclass.h"

int main(){
    Student student1(92101, "Carlos", "Calculus");
    Student student2(92101, "Carlos", "ComputerScience");
    vector<int> sections;

    Course math("Calculus");
    Student Carlos("Carlos");
    math.addStudentToSection(Carlos, 0);
    

    student1.display();
    student2.display();

}