#include  <iostream>
#include  "graph.h"


using namespace std;


bool Graph::addEdge(string v1, string v2) { 
    //preencher a lista caso os elementos n estejam inseridos
    return true;  
};

bool Graph::addVertex(string v) { 
    for(int i = 0; i < getnVertex(); i++) {
        
        if(list[i]->getBegin() == NULL) { 
            list[i]->addVertex(v);
            return true;
        }
        
    }

    return false;
};

Graph::Graph(int nVertex) { 
    this->list = (List**) malloc(nVertex * sizeof(List*));
    this->nVertex = nVertex;

    //numero de maximos de ligacao, todos os vertices ligados aos outros respctivamente
    for(int i = 0;  i < getnVertex(); i++) {
         list[i] = new List();
    };
};


Graph::Graph() : Graph(4) {

};

int Graph::getnVertex() {
     return this->nVertex;
};

void Graph::printGraph() { 
    for(int i = 0; i < getnVertex(); i++) { 
        list[i]->printList();
    }
}