#include <iostream> 
#include "vertex.h"

using namespace std;



Vertex::Vertex(string label,  Vertex *next) {
    this->label = label;
    this->next = next;
};

Vertex::Vertex() : Vertex("", NULL) {
           
};
  
Vertex::Vertex(string label) : Vertex(label, NULL) {
           
};

string Vertex:: getLabel() { 
    return this->label;
};

  





