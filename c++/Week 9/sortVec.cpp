// You have a vector of integers
    // Print "yes" if the vector is sorted in *descending* order
        // otherwise, print "no"
        // you should only print one statement

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> inVec;
    unsigned int i;

    int input;
    cout<<"Please enter some values, ending with zero."<<endl;
    cin>>input;

    while(input != 0){
        inVec.push_back(input);
        cin>>input;
    }

    bool isSorted = true;
    // search the vector
    for(i = 0; i < inVec.size() - 1; i++){
        if(inVec.at(i) < inVec.at(i+1)){
            isSorted = false;
            break;
        }
    }

    if (isSorted){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

}