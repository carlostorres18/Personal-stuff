#include <iostream>
#include <vector>
using namespace std;

int main(){
    int totalEven = 0;
    int productOdd = 1;
    vector<int> vector = {2, 4, 3, 6, 1, 9};

    for(int i = 0; i < vector.size(); i++){
        if(vector.at(i) % 2 == 0){
            totalEven += vector.at(i);
        }
        else{
            productOdd *= vector.at(i);
        }
    }
    cout<<"Sum of even numbers is "<<totalEven<<endl;
    cout<<"Product of odd numbers is "<<productOdd<<endl;
}