// Write a program that will do the following
#include <iostream>
using namespace std;
#include <iomanip>
#include <fstream> // iftream to read from files oftream to write from files
int main (){
    float balance;
    float money;
    float outBalance;
    string username;
    cout<<fixed<<setprecision(2);

    // 1. Greet the user, they have a new bank account ($0)
        cout<<"Hello, welcome to UTRGV bank. Please enter your username"<<endl;
        cin>>username;
        balance = 0;
        cout<<"Current value for: "<<username<<" is $"<<balance<<endl;

    // 2. Ask the user how much money they would like to deposit
        //Update the balance
        cout<<"Enter amount of money you would like to deposit"<<endl;
        cin>>money;
        cout<<"Current amount available is: $"<<money<<endl;

    // 3. Ask the user how much money they would like to withdraw
        // Update the balance
        cout<<"How much money would you like to withdraw? "<<endl;
        cin>>outBalance;
        outBalance = money - outBalance;

        cout<<"Withdraw successful, new amount is: $"<<outBalance<<endl;
    // Say goodbye.
        cout<<"Thank you, goodbye."<<endl;
}