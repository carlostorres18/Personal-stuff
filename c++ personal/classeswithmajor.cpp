#include <iostream>
using namespace std;
#include "majorclass.h"

int main(){
    SameClassMajor student1(92101, "Carlos", "Calculus", "Calculus");
    SameClassMajor student2(92101, "Carlos", "ComputerScience", "Calculus");

    student1.display();
    student2.display();

}