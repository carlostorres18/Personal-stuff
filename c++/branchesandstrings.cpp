// if else if else vc. if if else

// Based on day of the week
    // the day of the week is M, T, W, R, F, Sa, Su
    // if the day of the week is a week day, then 50% off meals
    // if the day of the week is a Friday, then 1 free cookie
    // if the day of the week is not a Friday, then 1 free drink

// Nested branch statements

#include<iostream>
using namespace std;

int main(){
    string dayOfWeek;
    bool isFriday, isWeekday;

    cout<<"What day of the week is?"<<endl;
    cout<<"M = Monday \nT = Tuesday \nW = Wednesday \nR = Thursday \nF = Friday \nSa = Saturday \nSu = Sunday"<<endl;
    cin>>dayOfWeek;

    // Below is the hard coding version

    // if(dayOfWeek == "M"||dayOfWeek == "T"||dayOfWeek == "W"||dayOfWeek == "R"){
    //     cout<<"Here is 50% off of your meal"<<endl;
    // }
    // else if(dayOfWeek == "F"){
    //     cout<<"Here is your free cookie"<<endl;
    // }
    // else if (dayOfWeek == "Sa"||dayOfWeek == "Su"){
    //     cout<<"Here is your free drink"<<endl;
    // }
    // else{
    //     cout<<"ERROR, not an invalid week day, please enter an appropriate week day"<<endl;
    // }

    // option 2
    // if(dayOfWeek =="F"){
    //     cout<<"YOU GET A COOKIE"<<endl;
    // }
    // else{
    //     cout<<"You get a free drink"<<endl;
    // }
    // if(dayOfWeek!="Sa" && dayOfWeek!="Su"){
    //     cout<<"You get 50% off"<<endl;
    // }

    // Nested branch version
        // Check if day is a weekday
    // 3 variables
    isWeekday = false;
    isFriday = false;
    
    if(dayOfWeek!="Sa" && dayOfWeek!="Su"){
        // cout<<"Here is 50% off of your meal"<<endl;
        isWeekday = true;
        // Check if day is Friday
        if(dayOfWeek == "F"){
            isFriday = true;
        }

    if(isWeekday){
        cout<<"Here is 50% off of your meal"<<endl;
    }
    if(isFriday){
        cout<<"Free cookie"<<endl;
    }
    else{
        cout<<"free drink"<<endl;
    }
    }
}
