#include <iostream>
#include "graph.h"


using namespace std;

int main() {

    Graph *gr = new Graph(4);    
    gr->addVertex("Diego");
    gr->addVertex("Leonardo");

    gr->printGraph();
    
    return 0;
}

