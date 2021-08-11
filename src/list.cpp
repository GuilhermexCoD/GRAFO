#include <iostream>
#include "vertex.cpp"



using namespace std;



class List {
     public: 
        List() {
             this->begin = new Vertice();     
             this->end = this->begin;
        }

        
        void insertList() {
             
        }

     private: 
       Vertice *begin;
       Vertice *end;
       
};