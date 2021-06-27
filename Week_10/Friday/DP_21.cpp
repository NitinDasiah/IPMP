class Solution
{
    public:
    int eggDrop(int n, int k) 
    {
        int DP[n + 1][k + 1];
    int res;
    int i, j, x;
 
    for (i = 1; i <= n; i++) {
        DP[i][1] = 1;
        DP[i][0] = 0;
    }
 

    for (j = 1; j <= k; j++)
        DP[1][j] = j;

    for (i = 2; i <= n; i++) {
        for (j = 2; j <= k; j++) {
            DP[i][j] = INT_MAX;
            for (x = 1; x <= j; x++) {
                res = 1 + max(
                              DP[i - 1][x - 1],
                              DP[i][j - x]);
                if (res < DP[i][j])
                    DP[i][j] = res;
            }
        }
    }
 
    return DP[n][k];
    }
};
