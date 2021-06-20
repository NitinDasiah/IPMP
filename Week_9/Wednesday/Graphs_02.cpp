#include<iostream>
#include<vector>
#include<map>
using namespace std;

class graph{
    map<int, vector<int>> edges;
    map<int, bool> visited;
    void DFS(int vertex){
        visited[vertex]=true;
        cout<<vertex<<"-->";
        for(int i=0;i<edges[vertex].size();i++){
            if(!visited[edges[vertex][i]])
                DFS(edges[vertex][i]);
        }
    }
    public:
        void addEdge(int source, int destination){
            edges[source].push_back(destination);
        }
        void DFSFrom(int vertex){
            map<int,bool>::iterator it;
            for(it=visited.begin();it!=visited.end();it++){
                it->second=false;
            }
            DFS(vertex);
        }
};

int main(){
    graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 9);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(9, 3);
 
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.DFSFrom(2);
 
    return 0;
}