#include <iostream>
#include <vector>
using namespace std;

class Student;
class Course;


class Course {
    private:
        string courseName;
        //string subject;
        vector<int> section;

    public:
    string subject;
        Course(string inCourseName = "", string inSubject = ""){
            courseName = inCourseName;
            subject = inSubject;
        }

        void addToSection(int SID) {
            section.push_back(SID);
        }

        void showAllStudents() {
            for(int i = 0; i < section.size(); i++){
                cout<<section[i]<<endl;
            }
        }



};
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
                newC.addToSection(idNumber);
            }
        }

        void drop(){
            
            // FIXME!!!;
        }

        void getID(){
            cout<<idNumber<<endl;
        }

    
};

class Manager{
    private: 
        vector<Course> catalog;
        vector<Student> students;
        int M;

    public:
        void addCourse(Course x){
            // add to catalog
        }
        
        void enrollStudent(Student y){
            // add to student
        }

        void getM(){

        }

        void setM(int newM){

        }
};


