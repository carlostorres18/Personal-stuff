// Write a program that will print out any number of 
// 'a' characters in a line
    // Ex. input is 7
    // output is "aaaaaaa"
// Add to this to print any number of rows for "aaaaaaa" from part 1
    // Ex. 5 rows of 3 a
    // output:
        // aaa // print a row of a's
        // aaa
        // aaa
        // aaa
        // aaa

#include <iostream>
using namespace std;

int main(){
    int num1;
    char letter = 'a';
    cin>>num1;
    int numRows;
    cin>>numRows;
    
    
    // repeat "row" number of times
    for(int j = 1; j <= numRows; j++){
        // Print a row of a's
        for(int i = 1; i <= num1; i++){
            cout<<letter;
        }
        cout<<endl;
        // End of the row

    }
}