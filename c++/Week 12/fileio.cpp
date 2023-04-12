// GOAL: output to a file, instead of to console
#include <iostream>
#include <fstream> // tools to read/write files
using namespace std;

int main(){
    
    // print hello to the console
    cout<<"Hello"<<endl;

    // setup my file reader/writer objects
    ifstream fileIn; //read in from the file
    ofstream fileOut; // writes out to the file

    // find the file, and open it
    fileOut.open("myText.txt");

    // Write each number from 10 to 20 to the file
    for(int i = 10; i <= 20; i++){
        fileOut<<i<<" ";
    }
    fileOut<<endl;

    // Close the file
    fileOut.close();
}
