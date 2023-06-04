#ifndef __graph__
#define __graph__

#include <map>
#include <vector>
#include <string>

using namespace std; 

class Graph{
    private:

    struct Node{
        double lat;
        double lon;
        string name; 
    };

    map<string, vector<pair<string, double> > > adjList; 
    vector<Node> nodes; 
    double radius; 

public:
Graph();
Graph(double radius);  
void addEdge(string loc1, string loc2, double dist);
void addNode(double lat, double lon, string name); 
void printNodeData() const; 

}; 

#endif