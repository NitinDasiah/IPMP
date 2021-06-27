#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

bool isBipartiteUtil(vector<vector<int>> G, vector<int>& color, int index){
    int n=color.size();
    color[index]=1;
    queue<int> q;
    q.push(index);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        if (G[u][u] == 1)
            return false;
        for(int i=0;i<n;i++){
            if(G[u][i]&&color[i]==-1){
                color[i] = 1 - color[u];
                q.push(i);
            }
            else if (G[u][i] && color[i] == color[u])
                return false;
        }
    }
    return true;
}

bool isBipartite(vector<vector<int>> G){
    int n=G.size();
    vector<int> colour(n,-1);
    for(int i=0;i<n;i++){
        if(!isBipartiteUtil(G,colour,i))
            return false;
    }
    return true;
}

int main(){
    vector<vector<int>> G = { { 0, 1, 0, 1 },
                    { 1, 0, 1, 0 },
                    { 0, 1, 0, 1 },
                    { 1, 0, 1, 0 } };
 
    isBipartite(G) ? cout << "Yes" : cout << "No";
    return 0;
}