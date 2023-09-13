#include <iostream>
using namespace std;

class Car{
    private: 
        string color;
        string model;
        int year;

    public: 
        void display(){
            cout<<"Car's Information: "<<endl;
            cout<<color<<endl;
            cout<<model<<endl;
            cout<<year<<endl;
        }
        Car(string inColor = "White", string inModel = "Prius", int inYear = 2007){
            color = inColor;
            model = inModel;
            year = inYear;
        }

};