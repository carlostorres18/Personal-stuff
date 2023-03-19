// Write a program that has the following
#include <iostream>
#include <iomanip>
using namespace std;
// a string message
// a true/false value
// a whole number
int main (){
    // declare objects
    string message;
    bool truth;  // use bool to make a true/false statement
    double num;

    // Create a SALES_TAX constant value;
    const double SALES_TAX = 0.0825;

    num = 10;

    // fortmat output values to have 2 decimals places shown always
    cout<<fixed<<setprecision(2);

    // increment number by + 6
    num = num *(1 + SALES_TAX);// this is equivalent to num += 6;
    cout<<"The total after tax is: $"<<num<<endl;




    /*
    Part 2 - OPERATIONS
    */

   // Declare two integer objects with values 100 and 5
   // Declare a third object to hold the value of some arithmetic
   int num1 = 100;
   int num2 = 5;
   int num3;

   // Multiply the 2 numbers
   num3 = num1*num2;
   // Divide the 2 numbers
   num3 = num1/num2;
   // Add the 2 numbers
   num3 = num1 + num2;
   // Subtract the 2 numbers
   num3 = num1 - num2;
   // *Find the value of the first number modulo second number
   num3 = num1 % num2; // Remainder of the division num1 and num2
   
   // Check if a number is even
    // check number % 2 is zero if even
         // number % 2 is 1 if odd
    // What are the possible values of any number -- (numX % 5)
    // 0, 1, 2, 3, 4

    /*
    PART 3 - STRINGS
    */

   // access by index
   string msg2 = "Coding is fun!";

   cout<<"The first letter of the string is: "<<msg2[0]<<endl;
   cout<<"The ninth letter of the string is: "<<msg2[8]<<endl;

   // string comparisons
    // equal ==, greater than >, and less than <
    // declare 2 strings to hold fruits
    string fruit1 = "Pear";
    string fruit2 = "Banana";
    cout<< (fruit1 > fruit2) << endl;
    
}


