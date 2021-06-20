#include<iostream>
#include<vector>
#include<map>
#include<stack>
using namespace std;

class graph{
    map<int, vector<int>> edges;
    map<int, bool> visited;
    void topologicalSortUtil(int vertex,stack<int>&S){
        visited[vertex]=true;
        for(int i=0;i<edges[vertex].size();i++){
            if(!visited[edges[vertex][i]])
                topologicalSortUtil(edges[vertex][i],S);
        }
        S.push(vertex);
    }
    public:
        void addEdge(int source, int destination){
            edges[source].push_back(destination);
        }
        void topologicalSort(){
            map<int,bool>::iterator it;
            for(it=visited.begin();it!=visited.end();it++){
                it->second=false;
            }
            stack<int> S;
            map<int,vector<int>>::iterator i;
            for(i=edges.begin();i!=edges.end();i++){
                if(!visited[i->first])
                    topologicalSortUtil(i->first,S);
            }
            while(!S.empty()){
                cout<<S.top()<<endl;
                S.pop();
            }
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
 
    g.topologicalSort();
 
    return 0;
}