// You have a vector of numbers inVec
    // search the Vector for any negative values - print values
    // **PART 2: and store them in another vector

#include <iostream>
#include <vector>

using namespace std;

int main(){
    // declare a new vector of integers
    vector<int> inVec;
    unsigned int i;

    // take input of values from the user until they enter 0

    int input;
    cout<<"Please enter some values, ending with zero."<<endl;
    cin>>input;

    while(input != 0){
        inVec.push_back(input);
        cin>>input;
    }

    vector<int> anotherVec;
    // search the vector
    for(i = 0; i < inVec.size(); i++){
        if(inVec.at(i) < 0){
            // cout<<inVec.at(i)<<" ";
            // use .push_back() to give the value to a new vector
            anotherVec.push_back(inVec.at(i));
            cout<<anotherVec.back()<<" ";
        }
    }

}