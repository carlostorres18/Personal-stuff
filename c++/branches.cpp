#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    // Branches

    // Legal to drive (16 yo)
        // 1. ask the user for the year they were born
        // 2. Calculate their age in 2023
        // 3. Output whether or not they can drive
            // 3*. If the age is negative, let them know there was an error
            // 3**. If the age is greater than 100, tell them not to drive (respectfully)
            // 3a. If they can, congratulations
            // 3b. If not, indicate they are not old enough
            // 3c. If not, let the user know in how many year they can drive

   int year;
   int num;

   cout<<"Please enter the year you were born: "<<endl;
   cin>>year; 
   
   int age = 2023 - year;
    // Error handling
   if(age<0){
    cout<<"ERROR! Year must be in the past. ";
    cout<<"You must be born to use this program"<<endl;

   }
   else if (age>100){
    cout<<"Please let me find someone to drive you..."<<endl;

   }
   else if (age>=16){
    cout<< "Congratulations! You can drive."<<endl;
    
   }
   else{
    cout<<"You are not old enough to drive yet."<<endl;
    cout<<"You will be able to drive in..."<< (16-age) <<" more years!"<<endl;

   }

   // User enters a number
        // If the number is less than 10, say it is a "small" number
        // If the number is not less than 10, but is less than 100, it's "medium"
        // If the number is not less than 100, but is less than 1000, it's large
        // otherwise, it's "enormous"

    cout<<"Please enter a number: "<<endl;
    cin>>num;

    if (num<10){
        cout<<"small"<<endl;
    }
    else if(num>10 && num<100){
        cout<<"medium"<<endl;
    }
    
    // You dont have to add &&, but it can also work, another way to make it work would be just using num<1000.
    else if(num<100 && num<1000){
        cout<<"large"<<endl;
    }
    else{
        cout<<"enormous"<<endl;
    }





}