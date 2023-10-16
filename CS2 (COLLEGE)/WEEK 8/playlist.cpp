#include <iostream>
using namespace std;
#include "Song.cpp"

class playlist{
    // Private variables that you think belong in a Playlist
    string currentSongPlaying;
    Song* head;
    Song* tail;
    int songCount;

    public:
        // Methods that you'll be implementing
        void addSong(string inName){
            head = new Song(inName);
        }

        void removeSong(){

        }

        void displayPlaylist(){
            Song* currentPtr = head;
            while(currentPtr != nullptr){
                cout<<currentPtr->name<<endl;
            }

        }

};