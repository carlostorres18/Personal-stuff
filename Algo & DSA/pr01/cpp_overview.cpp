#include <iostream>
using namespace std;

/*
    0 false, 1 true
    any non-zero number be it positive or negative -> true
    zero ex. 0, 0.0, 0.0f -> false
    float can hold up to 8 digits
    double can hold up to 15 digits (double of float lol)

    important to remember auto basically when at compile time, auto will basically
        automatically (lol) decipher the data type of the variable. not really a need
        if you know the type just do the type.
        ex:
            auto PI = 3.14159.... will basically detect that PI is a double

    typeid().name() can help identify the type of any variable
        important when importing files and idk the type of a variable
        ex:
            int age = 10;
            cout<<typeid(age).name()<<endl;

        basically the initials of the variable type:
            gives i for int, b for bool, f for float, s for string, c for char, d for double

    x++ increments by one
    ++x does the same

    x-- decrements by one
        --x does the same
    
    the main difference between the signs being on the front ++x (pre increment)
    and the back x++ (post increment) is
        ++x here you are saying increment first (++) x and then print it
            Pre increment/decrement
                modify and return
        x++ here you are saying print x first and then increment (++)
            Post increment/decrement
                make a copy of x; update x; return copy of x;
    
    ternary operators: it can be used a shorter if-else statement
        this is not good in the sense of readability bc the more cases it has
        the harder it can be to read and follow what its supposed to do
        good for small cases im assuming
        ex.
            int x = (condition) ? choice A if true : choice B if false
    

    
*/

int main(){

    /*
    Write a program that asks the user to input an amount in quarters, then in dimes
    nickels, and then pennies.abort

    Sum up the value of the coins and output the total. Assume that the user will
    input a positive integer for the 4 inputs.
    
    Also be sure to output a statement before each input statement so the user
    knows what to input

    ex) 5 quarters, 6 dimes, 3 nickels, 7 pennies should output $2.07
        12 quarters, 2 dimes, 10 nickels, 18 pennies should output $3.88
        3 quarters, 0 dimes, 19 nickels, 65 pennies should output $2.35
    
    */

   // given
    float total;
    int q, d, n, p;

    cout<<"Enter amount of quarters: ";
    cin>>q;
    total = q * .25f;
    cout<<"Enter amount of dimes: ";
    cin>>d;
    total = total + (d * .10f);
    cout<<"Enter amount of nickels: ";
    cin>>n;
    total = total + (n * .05f);
    cout<<"Enter amount of pennies: ";
    cin>>p;
    total = total + (p * .01f);

    cout<<"Your total is : $"<<total<<endl;

}