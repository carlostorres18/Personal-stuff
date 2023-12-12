#include <iostream>
#include <string>
using namespace std;
#include "CS2FinalsRev.h"

int main(){
    Students carlos("Carlos", 3.89, "CS", "Sophomore");
    carlos.display();
    cout<<endl<<endl;
    carlos.newYear();
    carlos.updateGPA(3.9);
    carlos.display();

}