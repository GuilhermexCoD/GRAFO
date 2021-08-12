#include <iostream>
#include "graph.h"


using namespace std;

int main() {

    Graph *gr = new Graph(4);  

    gr->addVertex("4");
    gr->addVertex("3");
    gr->addVertex("2");
    gr->addVertex("1");

    gr->addEdge("1", "2");
    gr->addEdge("2", "3");
    gr->addEdge("2", "5");
    gr->printGraph();


    
    return 0;
}

