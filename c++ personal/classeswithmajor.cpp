#include <iostream>
using namespace std;
#include "majorclass.h"

int main(){
    Student student1(92101, "Carlos", "Calculus");
    Student student2(92101, "Carlos", "ComputerScience");

    student1.display();
    student2.display();

}