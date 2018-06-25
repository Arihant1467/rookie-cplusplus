#include <iostream>
#include<stdio.h>
using namespace std;
struct adjListNode{
    int near;
    adjListNode *next;
};

struct adjListHead{
    adjListHead *head;
};

struct graph{
    int v;
    adjListHead *arr;
};
adjListNode* newAdjListNode(int near){
    adjListNode *newNode = new adjListNode();
    newNode->near = near;
    newNode->next = NULL
};
graph* createGraph(int V){
    graph *g = new graph();
    g->v = V;
    g->arr = new graph[V];
    for(int i=0;i<V;++i){
        g->arr[i]->head = NULL;
    }
    return g;
}
void addEdge(Graph *graph,int source,int destination){
    adjListNode *newNode = newAdjListNode(destination);
    newNode->next = graph->arr[source]->head
    graph->arr[source]->head = newNode;

    newNode = newAdjListNode(source);
    newNode->next = graph->arr[destination]->head
    graph->arr[destination]->head = newNode;
}

void printGraph(graph *graph,int V){

}
int main()
{
    int V = 5;
    struct Graph* graph = createGraph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
    printGraph(graph,V);
    return 0;
}
