#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> a;
    // 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    for(int i = 1; i < 11; i++){
        a.push(i);
    }

    a.pop();
    // 1, 2, 3, 4, 5, 6, 7, 8, 9
    a.push(13);
    // 1, 2, 3, 4, 5, 6, 7, 8, 9, 13
    cout<<a.top();


}