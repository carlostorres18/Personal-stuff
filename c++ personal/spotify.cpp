/*
    OK so idea on how i believe spotify random music selector works
        So in spotify there is a way for you to listen to random music in a play list
        So i believe that the music has are integer values that have names
        So if i have a list of 5 numbers and they are all assigned with the number 0, in which i could run an algorithm so select
        one of the numbers from the list, and i would create an integer value that gets added one everytime a song is selected
        and once the random selects another number 

        Selects random number and if number already appeared once add value to something so that only numbers with said value are less
        than the previous one appear, until they all have the same value and do the same task again.

*/
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
    srand((unsigned) time(NULL));

    int random = 1 + (rand() % 5);

    cout<<random<<endl;

    

}