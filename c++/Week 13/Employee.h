#include <iostream>
using namespace std;
// Define a class Employee with 3 public attributes
    // name, rank, salary
class Employee{
    public: 
        string name;
        string rank;
        int salary;

        // Constructor
        // add default values for name, rank, and salary
        Employee(string inName = "No Name", string inRank = "Entry-Level", int inSalary = 1){
            // set the name and rank and salary of the employee
            name = inName;
            rank = inRank;
            salary = inSalary;

            cout<<"Employee has been hired!"<<endl;

            // Call the display() method
            display();
        }

        // Create a method display() that will show all attributes
            // of the employee
        void display(){
            cout<<"Employee details:"<<endl;
            cout<<" Name: "<<name;
            cout<<"\t Rank: "<<rank;
            cout<<"\t Salary: "<<salary<<endl;
        }
        
};