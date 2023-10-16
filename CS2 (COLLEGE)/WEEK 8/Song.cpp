#include <iostream>
#include <string>
using namespace std;


// Song is a "Node", they are both interchangeable
class Song{
    public: 
        Song* next;
        string name;
    
    Song(string name){
        this->name = name;
        next = nullptr;
    }
};