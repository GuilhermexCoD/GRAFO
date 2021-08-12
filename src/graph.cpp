#include  <iostream>
#include <string.h>
#include  "graph.h"


using namespace std;


/*
  (graph not direction)
  @param string v1 ------ string v2
  @param string v2 ------- string v2

  (graph direction) 
  @param string v1 ------- string v2
*/

bool Graph::addEdge(string v1, string v2) { 

    bool v2Exist = false;
    bool v1Exist = false;

    int endV1 = 0;
    int endV2 = 0;
    for(int i = 0; i < nVertex; i++) {
        
        if(!list[i]->getBegin()->getLabel().compare(v1)) {
            endV1 = i;
            v1Exist = true;
        }

        if(!list[i]->getBegin()->getLabel().compare(v2)) {
             endV2 = i;
             v2Exist = true;
        }

     };

        if(v2Exist && v1Exist) {
            list[endV1]->addVertex(v2);
            list[endV2]->addVertex(v1); 
            return true;
        }

    //verificar so os elementos fazem mais de duas mesma ligacao
    
     return false;

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
        cout << "referencia -> " << &list[i] << endl;
        list[i]->printList();
    }
};