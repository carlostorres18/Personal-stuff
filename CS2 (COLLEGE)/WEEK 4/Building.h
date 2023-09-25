// Write a class Building with the following attributes (private)
    // attributes: number of floors
        // sq ft
        // skyscraper? Y/N
        // cost to build $.$$
    // methods:
        // write a public method build() that will complete the following
            // print a message with the building details
            // if the building has a skyscrapper, will add 20% to cost to build
        
    // constructor (public):
        // write a constructor that will set all initial values
            // number of floors is required
                // defualt value for sq ft is 1000
                // defualt for skyscrapper is No
                // defualt for cost to build is 20
#include <iostream>
using namespace std;

class Building{
    private: 
        int numFloors;
        int sqFt;
        bool skyScrapper;
        float cost;

    public:

        void build(){
            cout<<"Details of Building: "<<endl;
            cout<<numFloors<<endl;
            cout<<sqFt<<endl;
            if(skyScrapper){
                cost = cost + cost * .20;
                cout<<"Since this is a skyscrapper, the cost is: ";
                cout<<cost<<endl;
            }
            else{
                cout<<"Your non-scrapper will cost: ";
                cout<<cost<<endl;
            }
        }

        Building(int inNumOfFloors, int insqFt = 1000, bool inSkyScrapper = false, float inCost = 20){
            numFloors = inNumOfFloors;
            sqFt = insqFt;
            skyScrapper = inSkyScrapper;
            cost = inCost;
        }
};