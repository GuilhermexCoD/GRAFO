#include  <iostream>
#include  "vertex.h"
#include "list.h"
#include <vector>

using namespace std;




class Graph {
     

     public:  

       Graph(int nVertex) {
          this->nVertex = nVertex;
          this->list = (List**) malloc(nVertex * sizeof(List*));           
       }

     private:

      List **list;
      int nVertex;
        
};



/*

Lista adjacentes ()
-implementar lista -> lista de vertices

metodos:

     addEdge(new Vertice(), new Vertice());
     grau(new Vertice())


*/


/*
obs: Qual sera mais facil de implementar

Duas alternativas -> vector (vector<List> v) de lista ou lista de lista(List **list) -> List[0] = (LIST *) malloc(ngrau * sizeof(List)) 
vetor hardcoded[nVexter];

*/