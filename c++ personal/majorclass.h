#include <iostream>
using namespace std;

class SameClassMajor{
    private:
        int idNumber;
        string name;
        string major;
        string classSubject;

    public:
        void display(){
            cout<<"Student's Information: "<<endl;
            cout<<"name: "<<name<<endl;
            cout<<"ID number: "<<idNumber<<endl;
            cout<<"Major: "<<major<<endl;
            if(classSubject == major){
                cout<<"Classroom: You are in Classroom 1"<<endl;
            }
            else{
                cout<<"Classroom: You are in Classroom 2"<<endl;
            }
            
        }

    SameClassMajor(int inIDnumber = 0, string inName = "", string inMajor = "undecided", string inClassSubject = "unknown"){
        idNumber = inIDnumber;
        name = inName;
        major = inMajor;
        classSubject = inClassSubject;
    }
};

class Student {

    // sameClassMajor determines if class subject is same as major
};

class Course {
    // register() method
        // for each Student in enrollment list
        // if student.sameClassMajor() == true
            // Course register section 1
        // else
            // register section 2

    // display sections
        // 1: std1, std2, ...
        // 2: std4, std7, ...
};

Course CSCI2380;