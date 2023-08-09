// Print the board positions of the tic tac toe. [check]
// Get the users to print 



#include <iostream>
#include <vector>
#include <string>
#include "ttt.hpp"
using namespace std;

int main(){
    for(int i = 0; i < 9; i++){
        answer[i] = "";
    }
    while(true){
        gameGrid();
        playerChoices();
        playerChoices2();
        
    }
    checkWinner();
}