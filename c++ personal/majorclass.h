#include <iostream>
using namespace std;

class SameClassMajor{
    private:
        string major;
        string classSubject;

    public:
        void display(){
            if(classSubject == major){
                cout<<"Classroom: You are in Classroom 1"<<endl;
            }
            else{
                cout<<"Classroom: You are in Classroom 2"<<endl;
            }
            
        }

    SameClassMajor(string inMajor = "undecided", string inClassSubject = "unknown"){
        major = inMajor;
        classSubject = inClassSubject;
    }
};

class Student {
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
            
        }

    Student(int inIDnumber = 0, string inName = "", string inMajor = "undecided", string inClassSubject = "unknown"){
        idNumber = inIDnumber;
        name = inName;
        major = inMajor;
        classSubject = inClassSubject;
    }

    // sameClassMajor determines if class subject is same as major
    Student sameClassMajor(){
        if(classSubject == major){
                cout<<"Classroom: You are in Classroom 1"<<endl;
            }
            else{
                cout<<"Classroom: You are in Classroom 2"<<endl;
            }
    }
};

class Course {
    private:
    int idNumber;
    string name;
    string major;

    public:

    void registerForClass(){
        if(sameClassMajor() == true){
            cout<<"You are in class 1"<<endl;
        }
        else{
            cout<<"You are in class 2"<<endl;
        }
    }
    // register() method
        // for each Student in enrollment list
        // if student.sameClassMajor() == true
            // Course register section 1
        // else
            // register section 2

    // display sections
        // 1: std1, std2, ...
        // 2: std4, std7, ...
    void display(){
        cout<<"Student's Information: "<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"ID number: "<<idNumber<<endl;
        cout<<"Major: "<<major<<endl;
    }
};

Course CSCI2380;