#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string input;
    vector<char> vowels = {'a','e','i','o','u'};
    vector<char> result;

    // Get the user to input text to translate.
    cout<<"Enter text that you would like to translate into whale text: "<<endl;
    getline(cin, input);
    
    for(int i = 0; i < input.size(); i++){
        for(int j = 0; j < vowels.size(); j++){
            if(input.at(i) == vowels.at(j)){
                result.push_back(input.at(i));
            }
        }
        if(input.at(i) == 'u' || input.at(i) == 'e'){
            result.push_back(input.at(i));
        }
    }
    for(int k = 0; k < result.size(); k++){
        cout<<result.at(k);
    }
}

