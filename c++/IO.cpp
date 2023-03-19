#include <iostream>
using namespace std;

int main(){
    // Task: print my name to the screen
    cout<<"My name is Carlos Torres"<< endl;

    /*Print this
        1

        2


        3 4 5
        END
    */    
   cout<<1<<endl<<endl;
   cout<<2<<endl<<endl<<endl;
   cout<<"3 4 5"<<endl<<"END"<<endl;

   // Input from console
   int myFavNum; // For C++ a whole number is an integer "int"

        //"cin"
    //...and store it in "myFavNum"
    cout<<"Give me your Favorite Number: \n";
    cin>>myFavNum;


   //later...
   cout<<myFavNum<<endl;

   /*
   a few data types
   "int"- integer, or whole numbers
   string - a string of characters
   "float"- floating point number, or a decimal value
   */
  // Ask user for their info:
    //name
    //age
    //height(decimal)
// Print to the screen:
//"Name: " {user's name}
//"Age: " {user's age}
//"Height: " {user's height}

string name;
int age;
float height;


    cout<<"Name: "<< endl;
    cin>>name;
    cout<<"Age: "<< endl;
    cin>>age;
    cout<<"Height: "<<endl;
    cin>>height;

    cout<<name<<" "<<age<<" "<<height<<endl;



}
