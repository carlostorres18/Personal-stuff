#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        float gpa;
        string major;
        string year;
    
    public:
        Student(string inName = "", float inGPA = 4.0, string inMajor = "Undecided", string inYear = "Freshman"){
            name = inName;
            gpa = inGPA;
            major = inMajor;
            year = inYear;
        }

        float updateGPA(float newGPA){
            gpa = newGPA;
        }

        string changeMajor(string newMajor){
            major = newMajor;
        }

        void startNextYear(){
            if(year == "Freshman"){
                year = "Sophomore";
            }
            else if(year == "Sophomore"){
                year = "Junior";
            }
            else{
                year = "Senior";
            }
        }

        void display(){
            cout<<"Student Information"<<endl;
            cout<<name<<endl;
            cout<<gpa<<endl;
            cout<<major<<endl;
            cout<<year<<endl;
        }
};