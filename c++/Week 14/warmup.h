#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Coordinate{
    private: 
        int x, y;

    public:
        // Constructor
        Coordinate(int coordinate_x, int coordinate_y){
            x = coordinate_x;
            y = coordinate_y;

            cout<<"New coordinate located"<<endl;
        }
};

class Map{
    private:
        // Vector of Coordinates called "location"
        vector<Coordinate> location;

    public:
        // a method to add a new coordinate to locations
        void newLocation(Coordinate wow){
            location.push_back(wow);
        }
};

class Point{
    private:
        int x;
        int y;
    public:
        Point(int a = 0, int b = 0){
            x = a;
            y = b;
        }
        void Print(){
            cout<<"("<<x<<", "<<y<<")"<<endl;
        }
        float DistanceTo(Point anotherPoint){
            // current point of x
            cout<<x<<endl;
            // access anotherpoint's x
            cout<<anotherPoint.x<<endl;

            // formula
                // distance = square root of -->[(x2 - x1)^2 + (y2 - y1)^2]
            float diff = sqrt(pow(x - anotherPoint.x, 2) + pow(y - anotherPoint.y, 2));

            return diff;
        }
};