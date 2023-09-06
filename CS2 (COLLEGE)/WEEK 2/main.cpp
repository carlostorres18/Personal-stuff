/*
    Array Overview
    Function Overview


*/
class Monkey{

};

void nothing(string input){

}
float func(){
    return 3.14;
}



#include <iostream>
using namespace std;

int main(){
    bool myBool[50];
    char myChar[3];
    Monkey myMonkey[17];
    Monkey monk;

    myBool[0] = true;
    cout<<myChar[1]<<endl;
    myMonkey[17 - 1] = monk;

    for(int i = 0; i < 50; i++){
        if(i % 2 == 0){
            myBool[i] = true;
        }
        else{
            myBool[i + 1] = false;
        }
    }
    cout<<myBool[2]<<myBool[3];

}