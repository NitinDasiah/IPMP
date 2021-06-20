#include<iostream>
#include<vector>
#include<map>
#include<stack>
using namespace std;

class graph{
    map<int, vector<int>> edges;
    map<int, bool> visited;
    bool isCyclicUtil(int vertex,int parent){
        visited[vertex]=true;
        for(int i=0;i<edges[vertex].size();i++){
            if(edges[vertex][i]==parent)
                continue;
            else if(!visited[edges[vertex][i]]){
                if(isCyclicUtil(edges[vertex][i],vertex))
                    return true;
            }
            else{
                return true;
            }
        }
        return false;
    }
    public:
        void addEdge(int source, int destination){
            edges[source].push_back(destination);
            edges[destination].push_back(source);
        }
        bool isCyclic(){
            map<int,bool>::iterator it;
            for(it=visited.begin();it!=visited.end();it++){
                it->second=false;
            }
            map<int,vector<int>>::iterator i;
            for(i=edges.begin();i!=edges.end();i++){
                if(!visited[i->first]){
                    if(isCyclicUtil(i->first,-1))
                        return true;
                }
            }
            return false;
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
 
    g.isCyclic();
 
    return 0;
}