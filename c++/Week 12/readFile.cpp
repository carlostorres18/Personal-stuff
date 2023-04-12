// Read the contents of a file and print them to console
#include <iostream>
#include <fstream>
using namespace std;

int main (){
    int num;
    // create the file reader object "ifstream"
    ifstream fileIn;

    // open the file
    fileIn.open("myText.txt");

    // check if the file is open
    if(fileIn.is_open()){
        cout<<"The file is open!"<<endl;
        
    }
    else{
        cout<<"There was an error opening the file!"<<endl;
        return 0; // kill the program, return 1 because there was an error
    }

    // read the file (similar to "cin")
    // hard coded to 11 numbers
    // for(int i = 0; i < 11; i++){
    //     fileIn>>num;
    //     cout<<num<<endl;

    // }
    // change to a while loop
    // while we are not at the end of the file, keep reading and printing
    while(fileIn.eof() == false){
        fileIn>>num;
        cout<<num<<" ";
    }
    cout<<"DONE"<<endl;


    // close the file
    fileIn.close();
}