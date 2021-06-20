class Solution
{
    int knapSackUtil(int W, int wt[], int val[], int i, vector<vector<int>>& DP){
        if(i<0)
            return 0;
        else if(DP[i][W]!=-1){
            return DP[i][W];
        }
        else if(wt[i]>W){
            DP[i][W]=knapSackUtil(W,wt,val, i-1,DP);
        }
        else{
            DP[i][W]=max(val[i]+knapSackUtil(W-wt[i],wt,val,i-1,DP),knapSackUtil(W,wt,val,i-1,DP));
        }
        return DP[i][W];
    }
    public:
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>> DP(n,vector<int>(W+1,-1));
       return knapSackUtil(W,wt, val,n-1,DP);
    }
};