#include <iostream>
#include "list.h"
#include "vertex.h"


using namespace std;

/*
 @return bool
 @param  string (name or label of Vertex)
*/

void List::addVertex(string v) {   
     
     Vertex *newvertex = new Vertex(v); 

     newvertex->next = begin->next;

     begin->next = newvertex;

     if(begin == end) {
          end = newvertex;
     }

     newvertex = NULL;

     free(newvertex);

};

List::List() {   
     this->begin = new Vertex();     
     this->end = this->begin;
};

bool List::isEmpty() {
     return this->begin == this->end;
};

Vertex* List::getBegin() { 
     return this->begin->next;
};

void List::printList() {
      for(Vertex* i = begin->next; i != NULL; i = i->next) {
            cout <<  i->getLabel() << "-> " << endl;
      }
}

//lista adjacente com cabeca, portanto o primeiro elemento sera o begin->next;