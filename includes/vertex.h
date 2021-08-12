#ifndef VERTEX_H
#define VERTEX_H
#include <string>


using namespace std;
class Vertex {
    private: 
        string label;
        
    public: 

        Vertex(string label, Vertex *next);
        Vertex();
        Vertex(string label);
        Vertex *next;
        string getLabel();
};



#endif 