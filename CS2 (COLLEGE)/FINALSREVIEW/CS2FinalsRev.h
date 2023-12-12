#include <iostream>
using namespace std;

class Students{
    private: 
        string name;
        float GPA;
        string major;
        string year;
    public:
        Students(string inName = "", float inGPA = 4.0, string inMajor = "Undecided", string inYear = "Freshman"){
            name = inName;
            GPA = inGPA;
            major = inMajor;
            year = inYear;
        }

        void updateGPA(float newGPA){
            GPA = newGPA;
        }

        void newYear(){
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
            cout<<"Students Information"<<endl;
            cout<<name<<endl;
            cout<<GPA<<endl;
            cout<<major<<endl;
            cout<<year<<endl;
        }
};