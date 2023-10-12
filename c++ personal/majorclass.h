#include <iostream>
#include <vector>
using namespace std;

class Student;
class Course;

class Student {
    private:
        int idNumber;
        string name;
        string major;

        

    public:
        void display(){
            cout<<"Student's Information: "<<endl;
            cout<<"name: "<<name<<endl;
            cout<<"ID number: "<<idNumber<<endl;
            cout<<"Major: "<<major<<endl;
            
        }
        

        Student(int inIDnumber = 0, string inName = "", string inMajor = "undecided"){
            idNumber = inIDnumber;
            name = inName;
            major = inMajor;
        
        }

        void registerForSubject(Course newC){
            if(major == newC.subject){
                newC.push_back(idNumber);
            }
        }

        void drop(){
            // FIXME!!!;
        }

    
};

class Course {
    private:
        string courseName;
        string subject;
        vector<int> section;

    public:
        Course(string inCourseName = "", string inSubject = "", vector<int> inSection){
            courseName = inCourseName;
            subject = inSubject;
            section = inSection;
        }



};
