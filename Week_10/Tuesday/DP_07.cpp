class Solution{
    vector<vector<int>> dp;
    int matrixChainMemoised(int* p, int i, int j)
    {
        if (i == j)
        {
            return 0;
        }
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        dp[i][j] = INT_MAX;
        for (int k = i; k < j; k++)
        {
            dp[i][j] = min(dp[i][j], matrixChainMemoised(p, i, k)+ matrixChainMemoised(p, k + 1, j)+ p[i - 1] * p[k] * p[j]);
        }
        return dp[i][j];
    }
public:
    int matrixMultiplication(int n, int arr[])
    {
        int i = 1, j = n - 1;
        dp.resize(n+1,vector<int>(n+1,-1));
        return matrixChainMemoised(arr, i, j);
    }
};
