// Define a class Coordinate. This class will have private attributes of x value and a y value as a coordinate location
    // This class will need a public constructor, that will  take parameters (x, y) and set those to the x and y values of the Coordinate object.
// Next, define a class Map. This class will have a private attribute locations, which will contain a vector of Coordinate objects.
// Lastly, define a method for your Map class newLocation() that will take in a Coordinate and will add the coordinate to the locations.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "warmup.h"


void PrintPoints(vector<Point> points){
    cout<<"[";
    for(int i = 0; i < points.size(); i++){
        points.at(i).Print();
        if(i != points.size() - 1){
        cout<<", ";
        }
    }
    cout<<"]";
}


int main(){
    srand((unsigned) time(NULL));

    vector<Point> points(5);
    Map myMap;
    Coordinate myHouse(7, 7);

    myMap.newLocation(myHouse);

    Point a(5, 6);
    Point b(-2, 3);
    Point c;

    a.Print();
    c.Print();

    cout<<a.DistanceTo(b)<<endl;
    for(int i = 0; i < points.size(); i++){
        points.at(i).x = rand() % 10;
        points[i].y = rand() % 10;
    }
    PrintPoints(points);
    
}