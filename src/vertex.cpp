#include <iostream> 


using namespace std;


class Vertice {
     private: 
       Vertice *next;
       string label;


     public: 

        Vertice(string label, Vertice *next) {
            this->label = label;
            this->next = next;
        }

        Vertice() : Vertice("undefined", NULL) {
           
        }
  
        Vertice(string label) : Vertice(label, NULL) {
           
        }

        Vertice *getNext() { 
            return this->next;
        }

        string getLabel() {
            return this->label;
        }      
};






