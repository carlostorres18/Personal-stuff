#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main(){
    int userInput;
    int cardNum = rand() % 54 + 1;
    cout<<cardNum<<endl;

    while(userInput != 0){
        cout<<cardNum<<endl;
        cin>>userInput;
    }
    
}