#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<climits>
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
        void topologicalSort(int source){
            int v=edges.size();
            map<int,bool>::iterator it;
            vector<int> distance(v,INT_MAX);
            distance[source]=0;
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
                int u=S.top();
                S.pop();
                if(distance[u]!=INT_MAX){
                    for(int i=0;i<edges[u].size();i++){
                        if(distance[edges[u][i]]>distance[u]+1)
                            distance[edges[u][i]]=distance[u]+1;
                    }
                }
            }
            for(int i=0;i<v;i++){
                cout<<distance[i]<<" ";
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
    int s=1;
    g.topologicalSort(s);
 
    return 0;
}