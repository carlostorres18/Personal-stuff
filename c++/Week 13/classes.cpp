#include <iostream>
using namespace std;
// 1. definition (the "class" keyword)
#include "firstClass.h" // this line has to be included after the namespace std;

int main(){
    // 2. declaration (pattern className idetifier)
            // Ex: int object (int myNumber)
            // Ex: Monkey object (Monkey thisGuy)
        // WE have a "Cat" class
    Cat myCat, anotherCat;
    Cat otherCat;

    // 3. Access (the "dot" operator)
        // objectIdentifier.attribute
        myCat.name = "Harold";
        anotherCat.name = "Freeloader";

        cout<<myCat.name<<endl;
        cout<<anotherCat.name<<endl;

        // set the color of myCat to tabby
        // set the age of freeloader to 12.2
        // set the mood myCat to hungry
        myCat.color = "Tabby";
        anotherCat.age = 12.2;
        myCat.mood = "Hungry";
        myCat.age = 2;

        // Execute meow() on myCat

        myCat.meow();
        anotherCat.meow();

        // execute feed() method
        myCat.feed();
        // Execcute birthday() method
        anotherCat.birthday();
}