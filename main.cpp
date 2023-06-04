#include "graph.h"
#include <iostream>

int main(){

    Graph ucla;

    ucla.addNode(34.0729,-118.4422,"Royce Hall"); 
    ucla.addNode(34.0705,-118.4442, "Ackerman Union");
    ucla.addNode(34.0690, -118.4422, "Court of Sciences"); 
    ucla.addNode(34.0735,-118.4526, "Hedrick Hall");

    ucla.addEdge("Royce Hall", "Ackerman Union", 10); 
    
    ucla.printNodeData(); 


}