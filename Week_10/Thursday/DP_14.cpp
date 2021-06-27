class Solution{
    public:
    int countMin(string str){
        int n=str.size();
        int DP[n][n], l, h, gap;
 

    memset(DP, 0, sizeof(DP));
 
    for (gap = 1; gap < n; ++gap)
        for (l = 0, h = gap; h < n; ++l, ++h)
            DP[l][h] = (str[l] == str[h])?DP[l + 1][h - 1] :(min(DP[l][h - 1],DP[l + 1][h]) + 1);

    return DP[0][n - 1];
    }
};