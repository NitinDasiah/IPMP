#include<iostream>
#include<vector>
#include<map>
#include<stack>
using namespace std;

class graph{
    map<int, vector<int>> edges;
    map<int, bool> visited;
    void SCCUtil(int vertex,stack<int>&S){
        visited[vertex]=true;
        for(int i=0;i<edges[vertex].size();i++){
            if(!visited[edges[vertex][i]])
                SCCUtil(edges[vertex][i],S);
        }
        S.push(vertex);
    }
    graph transpose(){
        graph g;
        map<int,vector<int>>::iterator i;
        for(i=edges.begin();i!=edges.end();i++){
            for(int j=0;j<edges[i->first].size();j++){
                g.addEdge(edges[i->first][j],i->first);
            }
        }
        return g;
    }
    public:
        void addEdge(int source, int destination){
            edges[source].push_back(destination);
        }
        void DFS(int v){
            visited[v]=true;
            cout<<v<<" ";
            for(int i=0;i<edges[v].size();i++){
                if(!visited[edges[v][i]])
                    DFS(edges[v][i]);
            }
        }
        void SCC(){
            map<int,bool>::iterator it;
            for(it=visited.begin();it!=visited.end();it++){
                it->second=false;
            }
            stack<int> S;
            map<int,vector<int>>::iterator i;
            for(i=edges.begin();i!=edges.end();i++){
                if(!visited[i->first])
                    SCCUtil(i->first,S);
            }
            graph g=transpose();
            map<int,bool>::iterator it;
            for(it=visited.begin();it!=visited.end();it++){
                it->second=false;
            }
            while(!S.empty()){
                int v=S.top();
                S.pop();
                if(!visited[v]){
                    g.DFS(v);
                    cout<<endl;
                }
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
 
    g.SCC();
 
    return 0;
}