//***********************************************************************************
// CSCI 3333.01 Spring 2025
// Instructor: Dr. Andres Figueroa
// Programming Assignment 3: National Parks DAG
// Students Name: Carlos Torres Espinoza  SID#: 20631527
//
//***********************************************************************************

#ifndef DAG_h
#define DAG_h

#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <climits>
using namespace std;

class DAG {
private:
    vector<string> vertex_name;     // name for the ith vertex
    unordered_map<string, int> vertex_number;   // index number from 0..n-1 for the vertex name
    vector<vector<int>> adj_matrix;
    unordered_map<int, vector<int>> adj_list;

public:
    DAG(vector<string> names, vector<vector<int>> weights);

    string toString();

    vector<int> topologicalSort();  // Topological sort method
    vector<int> dagShortestPaths(int start, vector<int>& dist);  // Shortest path in DAG
    vector<int> dagMostParksPath(int start, vector<int>& pathCount);  // Path visiting the most parks
};

// Constructor to initialize the DAG with the given park names and weights
DAG::DAG(vector<string> names, vector<vector<int>> weights) {
    vertex_name = names;
    for (int i = 0; i < vertex_name.size(); i++) {
        vertex_number[vertex_name[i]] = i;
    }
    for (int i = 0; i < weights.size(); i++) {
        adj_matrix.push_back(weights[i]);
    }

    // Create the adjacency list from the matrix
    for (int i = 0; i < weights.size(); i++) {
        for (int j = 0; j < weights.size(); j++) {
            if (weights[i][j] != 0) {
                adj_list[i].push_back(j);
            }
        }
    }
}

// Method to return the adjacency matrix and list as a string for debugging
string DAG::toString() {
    string s = "\n";
    s += "Adjacency Matrix:\n";
    s += " ";
    for (int i = 0; i < vertex_name.size(); i++)
        s += "\t" + vertex_name[i];
    s += "\n";
    for (int i = 0; i < adj_matrix.size(); i++) {
        s += vertex_name[i];
        for (int j = 0; j < adj_matrix.size(); j++) {
            s += "\t" + to_string(adj_matrix[i][j]);
        }
        s += "\n";
    }
    s += "Adjacency List:\n";
    unordered_map<int, vector<int>>::iterator itr;
    for (itr = adj_list.begin(); itr != adj_list.end(); itr++) {
        s += vertex_name[itr->first] + ":";
        vector<int> adj = itr->second;
        for (std::vector<int>::iterator element = adj.begin(); element != adj.end(); element++) {
            s += "\t" + vertex_name[*element] + "," + to_string(adj_matrix[itr->first][*element]);
        }
        s += "\n";
    }
    return s;
}

// Topological Sort (Kahn's Algorithm)
vector<int> DAG::topologicalSort() {
    vector<int> topoOrder;
    vector<int> indegree(vertex_name.size(), 0);

    // Calculate indegrees
    for (int i = 0; i < vertex_name.size(); i++) {
        for (int j : adj_list[i]) {
            indegree[j]++;
        }
    }

    // Queue for nodes with zero indegree
    queue<int> q;
    for (int i = 0; i < vertex_name.size(); i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    // Process the nodes with zero indegree
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        topoOrder.push_back(v);

        for (int w : adj_list[v]) {
            indegree[w]--;
            if (indegree[w] == 0) {
                q.push(w);
            }
        }
    }

    return topoOrder;
}

// DAG Shortest Paths (using topological sorting)
vector<int> DAG::dagShortestPaths(int start, vector<int>& dist) {
    dist[start] = 0;

    // Topologically sort the vertices
    vector<int> topoOrder = topologicalSort();

    // Relax edges in topological order
    for (int u : topoOrder) {
        if (dist[u] != INT_MAX) {
            for (int v : adj_list[u]) {
                if (dist[u] + adj_matrix[u][v] < dist[v]) {
                    dist[v] = dist[u] + adj_matrix[u][v];
                }
            }
        }
    }

    return dist;
}

// DAG Path visiting the most parks (modified version)
vector<int> DAG::dagMostParksPath(int start, vector<int>& pathCount) {
    pathCount[start] = 1;

    // Topologically sort the vertices
    vector<int> topoOrder = topologicalSort();

    // Find the path with most parks
    for (int u : topoOrder) {
        for (int v : adj_list[u]) {
            if (pathCount[u] + 1 > pathCount[v]) {
                pathCount[v] = pathCount[u] + 1;
            }
        }
    }

    return pathCount;
}

#endif /* DAG_h */
