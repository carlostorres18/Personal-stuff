// Convert to binary

// IntToReverseBinary(14)
// EX x = 14, 7, 3, 1, 0 (when it reaches 0 the code will stop)
    // output remainder of x/2: 0111
    // x/=2
    // returns "0111"

// StringReverse(string)
// Ex. "Hello"
// returns: "olleH"

/*As long as x is greater than 0
   Output x % 2 (remainder is either 0 or 1)
   x = x / 2*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string IntToReverseBinary(int x){
    string output;
    while(x > 0){
        // add the remainder to output
        output += to_string(x % 2);

        // divide x by 2
        x/= 2;
        cout<<"output: "<<output<<"\t";
        cout<<"X: "<<x<<endl;
    }
    return output;
}

// create the functions
int maxNum(vector<int> nums){
    int max = nums.at(0);
    for(int i = 0; i < nums.size()-1; i++){
        if(nums.at(i+1) > max){
            max = nums.at(i+1);
        }
    }

    return max;
}
int minNum(vector<int> nums){
    int min;
    for(int i = 0; i < nums.size(); i++){
        if(i == 0){
            min = nums.at(i);
        }
        else{
            if(nums.at(i) < min){
                min = nums.at(i);
            }
        }
    }

    return min;
}
int meanNum(vector<int> nums){
    // sum of num divided by the total nums
    int mean, numOfValues;
    numOfValues = nums.size();
    mean = 0;
    // add up each number in the vector
    for(int number : nums){
        mean += number;
    }

    return mean/numOfValues;
}

void numberStats(vector<int> numbers){
    // output a message:
    // max: ___ min:___ mean:___
    int max, min, mean;
    max = maxNum(numbers);
    min = minNum(numbers);
    mean = meanNum(numbers);

    cout<<"max: "<<max<<" min: "<<min<<" mean: "<<mean<<endl;

    return;

}

string StringReverse(string userString){
    string reverse;
    for(int i = userString.size()-1; i >=0; i--){
        reverse += userString.at(i);
    }
    return reverse;
}


int main(){
    // int num;
    // cin>>num;
    // string binary;
    // binary = IntToReverseBinary(num);
    // cout<<StringReverse("0111");

    vector<int> nums{1, 2, 3, 4, 5};
    numberStats(nums);

}