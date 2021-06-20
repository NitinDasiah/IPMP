#include<iostream>
#include<map>
#include<vector>

using namespace std;

class graph{
    public:
        map<int,vector<int>> edges;
};

int main(){
    int nodes, edges;
    cin>>nodes>>edges;
    vector<vector<int>> matrix(nodes,vector<int>(nodes,0));
    graph G;
    for(int i=0;i<edges;i++){
        int source, destination;
        cin>>source>>destination;
        matrix[source][destination]=1;
        G.edges[source].push_back(destination);
    }
    return 0;
}