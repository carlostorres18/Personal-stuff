#include <iostream>
#include <vector>
#include <string>
using namespace std;

string answer[9];

bool isWinner = false;

void gameGrid(){
    cout<<"["<<answer[0]<<"]"<<"["<<answer[1]<<"]"<<"["<<answer[2]<<"]"<<endl;
    cout<<"["<<answer[3]<<"]"<<"["<<answer[4]<<"]"<<"["<<answer[5]<<"]"<<endl;
    cout<<"["<<answer[6]<<"]"<<"["<<answer[7]<<"]"<<"["<<answer[8]<<"]"<<endl;
    cout<<endl;
}
void playerChoices() {
    char currentPlayer = 'x';
    int position;
    cout << "Player 1 choose position between 1-9" << endl;
    cin >> position;

    if (position >= 1 && position <= 9) {
        if (answer[position - 1] == "") {
            answer[position - 1] = currentPlayer;
        } else {
            cout << "Position already taken!" << endl;
        }
    } else {
        cout << "Invalid position!" << endl;
    }
}
void playerChoices2(){
    char player2 = 'o';
    int position;
    cout<<"Player 2 choose position between 1-9"<<endl;
    cin>>position;

    if(position >= 1 && position <= 9){
        if(answer[position - 1] == ""){
            answer[position - 1] = player2;
        }
        else{
            cout<<"Position already taken!"<<endl;
        }
    }
    else{
        cout<<"Invalid position!"<<endl;
    }
}
void checkWinner() {
    // Check for rows
    for (int i = 0; i < 3; i++) {
        // Check on the 'x' player
        if (answer[0][i] == 'x' && answer[1][i] == 'x' && answer[2][i] == 'x') {
            cout << "Player 'x' wins!" << endl;
            isWinner = true;
            return;
        }
        else if(answer[3][i] == 'x' && answer[4][i] == 'x' && answer[5][i] == 'x') {
            cout << "Player 'x' wins!" << endl;
            isWinner = true;
            return;
        }
        else if(answer[6][i] == 'x' && answer[7][i] == 'x' && answer[8][i] == 'x') {
            cout << "Player 'x' wins!" << endl;
            isWinner = true;
            return;
        }
        // Check on the 'o' player
        else if (answer[0][i] == 'o' && answer[1][i] == 'o' && answer[2][i] == 'o') {
            cout << "Player 'o' wins!" << endl;
            isWinner = true;
            return;
        }
        else if (answer[3][i] == 'o' && answer[4][i] == 'o' && answer[5][i] == 'o') {
            cout << "Player 'o' wins!" << endl;
            isWinner = true;
            return;
        }
        else if (answer[6][i] == 'o' && answer[7][i] == 'o' && answer[8][i] == 'o') {
            cout << "Player 'o' wins!" << endl;
            isWinner = true;
            return;
        }
    }
    // Check for collums
    for (int j = 0; j < 3; j++) {
        // Check on the 'x' player
        if (answer[0][j] == 'x' && answer[3][j] == 'x' && answer[6][j] == 'x') {
            cout << "Player 'x' wins!" << endl;
            isWinner = true;
            return;
        }
        else if (answer[1][j] == 'x' && answer[4][j] == 'x' && answer[7][j] == 'x') {
            cout << "Player 'x' wins!" << endl;
            isWinner = true;
            return;
        }
        else if (answer[2][j] == 'x' && answer[5][j] == 'x' && answer[8][j] == 'x') {
            cout << "Player 'x' wins!" << endl;
            isWinner = true;
            return;
        }
        // Check on the 'o' player
        else if (answer[0][j] == 'o' && answer[3][j] == 'o' && answer[6][j] == 'o') {
            cout << "Player 'o' wins!" << endl;
            isWinner = true;
            return;
        }
        else if (answer[1][j] == 'o' && answer[4][j] == 'o' && answer[7][j] == 'o') {
            cout << "Player 'o' wins!" << endl;
            isWinner = true;
            return;
        }
        else if (answer[2][j] == 'o' && answer[5][j] == 'o' && answer[8][j] == 'o') {
            cout << "Player 'o' wins!" << endl;
            isWinner = true;
            return;
        }
    }
    // Check Diagonally
    for(int i = 0; i < 3; i++){
        if ((answer[0][i] == 'x' && answer[4][i] == 'x' && answer[8][i] == 'x')) {
            cout << "Player 'x' wins!" << endl;
            isWinner = true;
            return;
        }
        else if ((answer[0][i] == 'o' && answer[4][i] == 'o' && answer[8][i] == 'o')) {
            cout << "Player 'o' wins!" << endl;
            isWinner = true;
            return;
        }
    }
    // Check Diagonally
    for(int i = 0; i < 3; i++){
        if ((answer[2][i] == 'x' && answer[4][i] == 'x' && answer[6][i] == 'x')) {
            cout << "Player 'x' wins!" << endl;
            isWinner = true;
            return;
        }
        else if ((answer[2][i] == 'o' && answer[4][i] == 'o' && answer[6][i] == 'o')) {
            cout << "Player 'o' wins!" << endl;
            isWinner = true;
            return;
        }
    }
}