// Warm up

// A vector numVec is filled with integer values
    // print all values in the vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numVect;

    // fill the vector with odd numbers 1, 3 , 5 , 7, 9... (total 12 odd numbers)
        // set the size of the vector to 12
        numVect.resize(12);
    for(int i = 0; i < numVect.size(); i++){
        // insert an odd number into the vector
        numVect.at(i) = i*2 + 1;
        // you can also use .push_back()
        // numVect.push_back(i*2+1);
    }
    // print all values in the vector
    for(int i = 0; i < numVect.size(); i++){
        cout<<numVect.at(i)<<" ";
    }
    cout<<endl;


    // subtract 1 from all the values in the vector
        // and print them in reverse
    for(int i = numVect.size()-1; i >= 0; i--){
        numVect.at(i) -= 1;
        cout<<numVect.at(i)<<" ";
    }
    cout<<endl;
        

}