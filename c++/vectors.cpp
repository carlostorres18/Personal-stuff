#include <iostream>
#include <vector> // use this for vectors
using namespace std;

int main(){
    // Declare a vector
    vector<float> myVec(5);

    // assign a 7 to the first space of the vector
    myVec[0] = 7; //this works, but there is a better way!
    myVec.at(0) = 7; // same thing, but protected from invalid access

    // Fill the vector with 0 2 4 6 8

    for(int i = 0; i < 5; i+=1){
        myVec.at(i) = i*2;
        cout<<myVec.at(i)<<" "; // print the values in the same line
    }
    cout<<endl;

    // increase the values in a vector by 5 each
    // 0 2 4 6 8 
    // 5 7 9 11 13
    for(int i = 0; i < myVec.size(); i += 1){
        myVec.at(i) += 5;
        cout<<myVec.at(i)<<" ";
    }
    cout<<endl;

    // print "." in between each character of this string
    string myStr = "THE END";
    for (int i = 0; i < myStr.size(); i++){
        cout<<char(myStr.at(i))<<".";
    }
    cout<<endl;


}