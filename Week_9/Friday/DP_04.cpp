class Solution{
public:
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        for (int i=1 ; i<N ; i++){
            Matrix[i][0] += Matrix[i-1][0];
        }
 
        for (int j=1 ; j<N ; j++){
            Matrix[0][j] += Matrix[0][j-1];
        }
        for(int i=1;i<N;i++){
            for(int j=1;j<N;j++){
                Matrix[i][j]=Matrix[i][j]+min(Matrix[i-1][j-1],Matrix[i-1][j],Matrix[i][j-1]);
            }
        }
        return Matrix[N-1][N-1];
    }
};