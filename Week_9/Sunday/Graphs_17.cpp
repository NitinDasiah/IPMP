#include <iostream>
#include <string>
#include<vector>
using namespace std;

bool BPM(vector<vector<bool>>&bpGraph,int index, vector<bool>& seen, vector<int>& match){
    int n=bpGraph[0].size();
    for(int i=0;i<n;i++){
        if(bpGraph[index][i]&&!seen[i]){
            seen[i]=true;
            if(match[i]<0||BPM(bpGraph,match[i],seen, match)){
                match[i]=index;
                return true;
            }
        }
    }
    return false;
}

int maxBPM(vector<vector<bool>> bpGraph){
    int n=bpGraph[0].size();
    int m=bpGraph.size();
    vector<int> match(n,-1);
    int result=0;
    for(int i=0;i<m;i++){
        vector<bool> seen(n,0);
        if(BPM(bpGraph,i,seen,match))
            result++;
    }
    return result;
}

int main()
{
    vector<vector<bool>> bpGraph = {{0, 1, 1, 0, 0, 0},
                                    {1, 0, 0, 1, 0, 0},
                                    {0, 0, 1, 0, 0, 0},
                                    {0, 0, 1, 1, 0, 0},
                                    {0, 0, 0, 0, 0, 0},
                                    {0, 0, 0, 0, 0, 1}};
 
    cout << "Maximum number of applicants that can get job is "
         << maxBPM(bpGraph);
 
    return 0;
}