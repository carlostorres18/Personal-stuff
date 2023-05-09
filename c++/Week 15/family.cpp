#include <iostream>
using namespace std;
#include "Person.h"

int main(){
    // Declare 2 person objects (grandama, notMyGrandma)
    Person grandma("meemaw", 1900);
    Person notMyGrandma("Harriet", 1999);

    // create a brand new person(grandpa)
    Person* grandpaPTR = new Person("Harold", 1920);

    // Access in 2 ways("." for objects "->" for pointers)
    // Access grandma's birthYear and set to 1940
    grandma.birthYear = 1940;
    // (pointers) access Person at grandpaPTR
        // and set name to "Barold"
    grandpaPTR->name = "Barold";

    
    // create a pointer to an "uncle" Person
    Person* uncle = new Person("uncle", 1980);

    // "link" grandpa to uncle
    grandpaPTR->child = uncle;

    // create and link a cousin, grandcousin
    Person* cousin = new Person("cousin", 2000);
    Person* grandCousin = new Person("grandCousin", 2020);
    // link uncle to cousin
    uncle->child = cousin;
    // link cousin to grandCousin
    cousin->child = grandCousin;




    // new list: start with a pointer to grandma
        // &grandma("address of grandma")
    Person* grandmaPTR = &grandma;
    // grandma's child is a brand new Person
    grandmaPTR->child = new Person("aunt", 1975);

    // try to print "aunt"'s birthYear
    cout<<"GrandMa was born in: "<<grandmaPTR->birthYear<<endl;
    cout<<"Aunt was born in: "<<grandmaPTR->child->birthYear<<endl;

    // aunt's child is "cousin"
    grandmaPTR->child->child = new Person("cousin", 1995);
    
    // "cousin"'s child is "stranger"
    grandmaPTR->child->child->child = new Person("stranger", 2023);
    // fix the birthYear to 2022
    grandmaPTR->child->child->child->birthYear = 2022;

    // traverse the list
        // 1. make a temporary or a "bookmark" pointer
        // 2. "follow" this pointer throughout the list

    Person* current = grandmaPTR;
    while(current != nullptr){
    // use current to print name and BY
    cout<<"Name: "<<current->name<<endl;
    cout<<"BY: "<<current->birthYear<<endl;
    // move current to the next object
    current = current->child;
    }


}