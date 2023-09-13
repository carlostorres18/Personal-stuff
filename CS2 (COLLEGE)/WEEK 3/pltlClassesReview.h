#include <iostream>
using namespace std;

class Chair{
    private:
        int legs;
        string color;
        bool wheels;
    public:
        Chair(int inLegs = 4, string inColor = "brown", bool inWheels = false){
            // this -> is used when you use the attributes that are in private and then will assign the parameters in the Constructor
            // ex. this-> legs (attribute in private) = legs (parameter in constructor)
            // use it if you are using the same name in the parameters of the constructor as the names in private attributes
            legs = inLegs;
            color = inColor;
            wheels = inWheels;

        }

        void display(){
            cout<<"Number of legs is "<<legs<<endl;
        }
};