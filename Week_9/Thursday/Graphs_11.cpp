#include<iostream>
#include<vector>
using namespace std;

class edge{
    public:
        int source, destination;
        edge(){
            source=-1;
            destination=-1;
        }
};

class graph{
    public:
        int noOfVertices;
        int noOfEdges;
        vector<edge> edges;
        graph(int v, int e){
            this->noOfVertices=v;
            this->noOfEdges=e;
            edges.resize(noOfEdges);
        }
};

int findParent(vector<int>& arr, int index){
    if(arr[index]!=-1)
        return findParent(arr,arr[index]);
    return index;
}

void Union(vector<int>& parent, int x, int y){
    parent[x]=y;
}

bool findCycle(graph g){
    vector<int> parent(g.noOfVertices,-1);
    for(int i=0;i<g.noOfEdges;i++){
        int x=findParent(parent,g.edges[i].source);
        int y=findParent(parent,g.edges[i].destination);
        if(x==y)
            return true;
        else{
            Union(parent,x,y);
        }
    }
}