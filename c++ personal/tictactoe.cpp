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

        if(isDraw()){
            cout<<"It's a draw!"<<endl;
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

        if(isDraw()){
            cout<<"It's a draw!"<<endl;
            gameGrid();
            gameOver = true;
            break;
        }

    }
    return 0;
}