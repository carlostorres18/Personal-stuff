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

    bool gameOver = false;

    while(!gameOver){
        gameGrid();
        playerChoices();
        checkWinner(); 

        if(isWinner){
            gameGrid();
            gameOver = true;
            break;
        }
        gameGrid();
        playerChoices2();
        checkWinner();   
        
        if(isWinner){
            gameGrid();
            gameOver = true;
            break;
        }
    }
    return 0;
}