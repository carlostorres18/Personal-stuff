#include <iostream>
using namespace std;

class Calculator{
// *****PART 1*****
// Define your Calculator class here, the class should have *at least* the following attribute
// value, a private member that holds the current result of the calculator
// add the two methods below, which must be public methods
//      clear() - will zero the value of the calculator
//      display() - will *return* the current result stored in the calculator
    private:
        float value;

    public:
        void clear(){
            value = 0;
        }

        float display(){
            return value;
        }

// *****PART 2*****
// add the following methods, all in public
//      add()
//      subtract()
//      multiply()
//      divide()
//      * For divide() function, make sure that it can handle errors
//      * specifically, if a user tries to divide by zero, print an error message
//      * and set the result value to zero.
    void add(float a){
        value += a;
    }
    void subtract(float a){
        value -= a;
    }
    void multiply(float a){
        value *= a;
    }
    void divide(float a){
        if(a == 0){
            cout<<"cannot divide by zero!"<<endl;
            value = 0;
        }
        else{
            value = value / a;
        }
    }

        

// *****PART 3*****
// create a constructor to give newly declared calculator objects a value
// add a default value of 0 to the constructor.

    Calculator(float inValue = 0){
        value = inValue;
    }


};