#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

class graph{
    map<int, vector<int>> edges;
    map<int, bool> visited;
    public:
        void addEdge(int source, int destination){
            edges[source].push_back(destination);
        }
        void BFS(int vertex){
            map<int,bool>::iterator it;
            for(it=visited.begin();it!=visited.end();it++){
                it->second=false;
            }
            queue<int> Q;
            visited[vertex]=true;
            Q.push(vertex);
            while(!Q.empty()){
                int current=Q.front();
                Q.pop();
                cout<<current<<"-->";
                for(int i=0;i<edges[current].size();i++){
                    if(!visited[edges[current][i]]){
                        Q.push(edges[current][i]);
                        visited[edges[current][i]]=true;
                    }
                }
            }
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
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);
 
    return 0;
}