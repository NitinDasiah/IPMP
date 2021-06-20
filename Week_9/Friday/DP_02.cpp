#include<iostream>
#include<vector>
using namespace std;

class Solution{ 
    int minDistance(vector<int>& dist, vector<bool>& sptSet, int V)
    {
        int min = INT_MAX, min_index;
        for (int v = 0; v < V; v++)
            if (sptSet[v] == false && dist[v] <= min)
                min = dist[v], min_index = v;
  
        return min_index;
    }
    
    int dijkstra(vector<vector<int>>& graph, int src)
    {
        int V=graph.size();
        vector<int> dist(V,INT_MAX); 

  
        vector<bool> sptSet(V,false); 

        dist[src] = 0;
    
        for (int count = 0; count < V - 1; count++) {

            int u = minDistance(dist, sptSet, V);

            sptSet[u] = true;
  
            for (int v = 0; v < V; v++){
                if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX&& dist[u] + graph[u][v] < dist[v])
                    dist[v] = dist[u] + graph[u][v];
            }
        }
    return dist[0];
}
public:
    int minimumStep(int n){
        vector<vector<int>> arr(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((j+1)==(i+2)||(j+1)==3*(i+1))
                    arr[i][j]=1;
            }
        }
        return dijkstra(arr, 0);
    }
};