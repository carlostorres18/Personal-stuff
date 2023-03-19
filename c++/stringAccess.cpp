// Write a program that will print an entire line of input
// intput: "Hello my name is Jeff"
// output: "HELLO MY NAME IS JEFF"
    // toupper()
    

#include <iostream>
using namespace std;

int main(){
    string msg;
    // this will take 1 word (stops at a space)
    // cin>>msg;

    // This will save the whole line
    getline(cin, msg);

    // use "toupper() function to capitalize a letter"
        // Ex. toupper('a') -> 'A'
    // repeat something (length of string) time (start counting from 0)
    for(int i = msg.size()-1;i >= 0; i--){
        // Print capital letter
        // cout<<(char)toupper(msg.at(i));
        cout<<msg.at(i);
    }
    cout<<endl;

    
    
}