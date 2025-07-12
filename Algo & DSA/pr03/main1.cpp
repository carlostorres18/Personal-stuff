//***********************************************************************************
// CSCI 3333.01 Spring 2025
// Instructor: Dr. Andres Figueroa
// Programming Assignment 3: National Parks DAG
// Students Name: Carlos Torres Espinoza SID#: 20631527
//
//***********************************************************************************

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <unordered_map>
#include "DAG.h"

using namespace std;

int main()
{
    ifstream parks("DAG-national-parks.txt");
    string line;
    vector<string> name;  // Vector to store the names of the parks
    vector<vector<int>> weight;  // 2D vector to store the adjacency matrix (weights)
    unordered_map<int, vector<int>> adj;  // Adjacency list for the graph
    int pos = 0;
    
    // Check if you can open the file
    if (!parks.is_open()) {
        cout << "Unable to open file" << endl;
        exit(1);
    }
    
    // Get the name of the parks from the first line
    getline(parks, line);
    string rest = line.substr(0); // Copy the line
    pos = (int)rest.find('\t');
    
    while (pos != -1) {
        name.push_back(rest.substr(0, pos));  // Extract park names from the line
        rest = rest.substr(pos + 1);
        pos = (int)rest.find('\t');
    }
    pos = (int)rest.find('\r');
    name.push_back(rest.substr(0, pos));  // Insert the last name in the line
    
    // Read the adjacency matrix (weights)
    int w;
    for (int i = 0; i < name.size(); i++) {
        vector<int> row;
        for (int j = 0; j < name.size(); j++) {
            parks >> w;
            row.push_back(w);  // Add weight to the adjacency matrix
        }
        weight.push_back(row);
    }

    // Now we create an instance of the DAG class, passing the park names and weight matrix
    DAG NP(name, weight);

    // Print the DAG object as a string
    cout << NP.toString() << endl;

    // Call topological sorting and print the result
    vector<int> topoOrder = NP.topologicalSort();
    cout << "Topological Order: ";
    for (int parkIndex : topoOrder) {
        cout << name[parkIndex] << " ";  // Use the index to get the park name
    }
    cout << endl;

    // Call DAG-Shortest-Paths algorithm (from North Cascades to Biscayne)
    vector<int> dist(name.size(), INT_MAX);
    dist = NP.dagShortestPaths(0, dist);
    cout << "Shortest Path from North Cascades to Biscayne: " << dist[3] << " (Distance)" << endl;

    // Call DAG-Modified-Shortest-Paths algorithm (find the path visiting the most parks)
    vector<int> pathCount(name.size(), 0);
    pathCount = NP.dagMostParksPath(0, pathCount);
    cout << "Most Parks Path from North Cascades to Biscayne: " << pathCount[3] << " Parks" << endl;

    return 0;

}
