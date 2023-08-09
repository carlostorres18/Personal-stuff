#include <iostream>
#include <vector>
#include <string>
using namespace std;

    string answer[9];

void gameGrid(){
    cout<<"["<<answer[0]<<"]"<<"["<<answer[1]<<"]"<<"["<<answer[2]<<"]"<<endl;
    cout<<"["<<answer[3]<<"]"<<"["<<answer[4]<<"]"<<"["<<answer[5]<<"]"<<endl;
    cout<<"["<<answer[6]<<"]"<<"["<<answer[7]<<"]"<<"["<<answer[8]<<"]"<<endl;
}
void playerChoices(){
    char player1 = 'x';
    int position;
    cout<<"Player 1 choose position between 1-9"<<endl;
    cin>>position;

    if(position >= 1 && position <= 9){
        if(answer[position - 1] == ""){
            answer[position - 1] = player1;
            player1 = (player1 == 'x')? 'o' : 'x';
        }
        else{
            cout<<"Position already taken!"<<endl;
        }
    }
    else{
        cout<<"Invalid position!"<<endl;
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
            player2 = (player2 == 'o')? 'o' : 'x';
        }
        else{
            cout<<"Position already taken!"<<endl;
        }
    }
    else{
        cout<<"Invalid position!"<<endl;
    }
}
void checkWinner(){
    for(int i = 0; i < 3; i++){
        if(answer[i][0] == 'x' && answer[i][1] == 'x' && answer[i][2] == 'x'){
            cout<<"winner chicken dinner"<<endl;
        }
    }
}