#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

class graph{
    map<int, vector<int>> edges;
    map<int, bool> visited;
    bool isReachable(int source, int destination){
        if(source==destination)
            return true;
        else{
            for(int i=0;i<edges[source].size();i++){
                if(!visited[edges[source][i]]){
                    visited[edges[source][i]]=true;
                    if(isReachable(edges[source][i],destination))
                        return true;
                }
            }
            return false;
        }
    }
    public:
        void addEdge(int source, int destination){
            edges[source].push_back(destination);
        }
        bool Reachable(int source, int destination){
            map<int,bool>::iterator it;
            for(it=visited.begin();it!=visited.end();it++){
                it->second=false;
            }
            return isReachable(source,destination);
        }
};

int main(){
    graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    int u = 1, v = 3;
    if(g.Reachable(u, v))
        cout<< "\n There is a path from " << u << " to " << v;
    else
        cout<< "\n There is no path from " << u << " to " << v;
 
    u = 3, v = 1;
    if(g.Reachable(u, v))
        cout<< "\n There is a path from " << u << " to " << v;
    else
        cout<< "\n There is no path from " << u << " to " << v;
 
    return 0;
}