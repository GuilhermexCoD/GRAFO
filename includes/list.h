#ifndef LIST_H
#define LIST_H
#include <string>
#include "vertex.h"

using namespace std;
class List {
     private: 
          Vertex *begin;
          Vertex *end;

     public: 
          List();
          void addVertex(string v);
          bool isEmpty();
          Vertex* getBegin();
          void printList();
};



#endif