#ifndef  GRAFO_H
#define  GRAFO_H
#include "list.h"
#include <string>


using namespace std;
class Graph {
    public: 
        Graph(int nVertex);
        Graph();
        int getnVertex();
        bool addEdge(string v1, string v2);
        bool addEdgeLoop(string v1, string v2);
        bool addVertex(string v);
        void printGraph();
        int getVertexIndex(string label);

    private:
        int nVertex;
        List **list;
};

#endif