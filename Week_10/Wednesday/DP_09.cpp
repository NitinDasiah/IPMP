class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        vector<vector<int>> DP(n+1,vector<int>(m+1,0));
        int result=0;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0||j==0)
                    DP[i][j]=0;
                else if(S1[i-1]==S2[j-1]){
                    DP[i][j]=DP[i-1][j-1]+1;
                    if(DP[i][j]>result)
                        result=DP[i][j];
                }
                else
                    DP[i][j]=0;
            }
        }
        return result;
    }
};