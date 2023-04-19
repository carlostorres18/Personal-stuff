#include <iostream>
#include <vector> // to make many objects
using namespace std;
#include "Employee.h"

int main(){
    // create a vector to hold 1000 employees "company"
    vector<Employee> company(1000);

    // Access employee 97 and set their name to "Jerald"
    company.at(97).name = "Jerald";

    // 2. Declaration Create an employee object
        // Constructor runs automatically
        // We do not call constructor method
    Employee bob("Bob", "Super Duper CEO", 74), susana("Susana", "Super CEO", 6);
    Employee emp1, emp2, emp3, emp4, emp5;

    // Print the name and rank of susana
    // susana.display();


    // Print the salary of the employee;
    // cout<<"The salary of the new employee is: "<<bob.salary<<endl;

    // 3. Access the salary of the employee and set to 3
    bob.salary = 3;
}