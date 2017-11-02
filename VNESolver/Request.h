#ifndef REQUEST_H_
#define REQUEST_H_

#include "Graph.h"

class Request {
    
    int id, arrival, departure, duration, maxD;
    Graph *g;

    float profit;
    
    public:
    Request(int id, int arrival, int duration, int maxD);
    ~Request();
    
    void setGraph(Graph *g);
    int getId();
    Graph* getGraph();
    int getArrival();
    int getDeparture();
    int getDuration();
    int getMaxD();

    void setProfit(float value);
    float getProfit();
      
};

#endif