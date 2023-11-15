#include <iostream>
using namespace std;

void bubble(int arr[], int n){
    int iter = 0;
    int i = 0;
    int j = 0;
    
    for(i = 0; i < n - 1; i++){
        // do 1 transition
        for(j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                // do 1 step
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}