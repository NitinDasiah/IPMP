#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

class graph{
    map<int, vector<int>> edges;
    map<int, bool> visited;
    void DFS(int vertex){
        cout<<vertex<<"-->";
        for(int i=0;i<edges[vertex].size();i++){
            if(!visited[edges[vertex][i]]){
                visited[edges[vertex][i]]=true;
                DFS(edges[vertex][i]);
            }
        }
    }
    public:
        void addEdge(int source, int destination){
            edges[source].push_back(destination);
        }
        int connectedComponents(){
            map<int,bool>::iterator it;
            for(it=visited.begin();it!=visited.end();it++){
                it->second=false;
            }
            map<int,vector<int>>::iterator i;
            int count=0;
            for(i=edges.begin();i!=edges.end();i++){
                int vertex=i->first;
                if(!visited[vertex]){
                    count++;
                    visited[vertex]=true;
                    DFS(vertex);
                    cout<<endl;
                }
            }
            return count;
        }
};

int main(){
    graph g;
    vector<vector<int>> arr = { { 1, 1, 0, 0, 0 },
                                { 0, 1, 0, 0, 1 },
                                { 1, 0, 0, 1, 1 },
                                { 0, 0, 0, 0, 0 },
                                { 1, 0, 1, 0, 1 } };
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1)
                g.addEdge(i+1,j+1);
        }
    }
    cout<<"Number of components: "<<g.connectedComponents();
 
    return 0;
}