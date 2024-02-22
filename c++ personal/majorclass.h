#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Student;
class Course;

class Course {
private:
    string courseName;
    string subject;
    unordered_map<string, vector<int>> sectionsByMajor;

public:
    Course(string inCourseName = "", string inSubject = ""){
        courseName = inCourseName;
        subject = inSubject;
    }

    void addToSection(int SID, string major) {
        sectionsByMajor[major].push_back(SID);
    }

    void showAllStudents() {
        for (const auto& section : sectionsByMajor) {
            cout << "Section for " << section.first << " major: " << endl;
            for (int SID : section.second) {
                cout << SID << endl;
            }
            cout << endl;
        }
    }


    void display(){
        cout << courseName << endl;
        printSection();
    }

    void printSection(){
        for (const auto& section : sectionsByMajor) {
            cout << "Section for " << section.first << " major: " << endl;
            for (int SID : section.second) {
                cout << SID << endl;
            }
            cout << endl;
        }
    }

    void removeFromSection(int SID);
};

class Student {
private:
    int idNumber;
    string name;
    string major;

public:
    Student(int inIDnumber = 0, string inName = "", string inMajor = "undecided"){
        idNumber = inIDnumber;
        name = inName;
        major = inMajor;
    }

    void display(){
        cout << "Student's Information: " << endl;
        cout << "name: " << name << endl;
        cout << "ID number: " << idNumber << endl;
        cout << "Major: " << major << endl;
        cout<<endl;
    }

    void registerForSubject(Course newC){
        newC.addToSection(idNumber, major);
    }

    int getID() const {
        return idNumber;
    }

    string getMajor() const {
        return major;
    }
};

class Manager{
private: 
    vector<Course> catalog;
    vector<Student> students;
    int M;

public:
    void addCourse(Course x){
        catalog.push_back(x);
        x.display();
    }
    
    void enrollStudent(Student y){
        students.push_back(y);
        y.display();
    }

    void drop(int rollNumber);
};

void Course::removeFromSection(int SID) {
    for (auto& section : sectionsByMajor) {
        section.second.erase(remove(section.second.begin(), section.second.end(), SID), section.second.end());
    }
}


void Manager::drop(int rollNumber) {
    // Remove student from all courses
    for (auto& course : catalog) {
        course.removeFromSection(rollNumber);
    }

    // Remove student from enrolled students
    students.erase(remove_if(students.begin(), students.end(), [rollNumber](const Student& s) { return s.getID() == rollNumber; }), students.end());

    // Display updated information
    for(auto& course : catalog){
        course.showAllStudents();
    }
}
