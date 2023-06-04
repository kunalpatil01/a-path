
#include <iostream>
#include "graph.h"

Graph::Graph() : adjList(), nodes(), radius(100) {}; 

Graph::Graph(double radius) : adjList(), nodes(),  radius(radius) {}; 

void Graph::addEdge(string loc1, string loc2, double dist){

    if(adjList.find(loc2)== adjList.end()){ 
        throw logic_error(loc2 + " not in list.\n"); 
        }

    if(adjList.find(loc1) == adjList.end()){
        throw logic_error(loc1 + " not in list.\n"); 
    }

    adjList[loc1].push_back(make_pair(loc2, dist)); 
    adjList[loc2].push_back(make_pair(loc1, dist)); 

    cout << "Added edge from " << loc1 << " to " << loc2 << " with distance " << dist << ".\n";  

}

void Graph::addNode(double lat, double lon, string name){

    if(adjList.find(name) != adjList.end()){
        throw logic_error(name + " already exists.\n"); 
    }

    Node* node = new Node(); 
    node->lat = lat; 
    node->lon = lon;
    node-> name = name; 
    adjList[name] = vector<pair<string,double> >(); 
    nodes.push_back(*node); 

    cout << "Added new location " << name << ".\n";  
}

void Graph::printNodeData() const{

    for(auto node : nodes){
        cout << node.name << " "; 
    }

}