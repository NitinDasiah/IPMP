class Solution {
  public:
    string longestPalin (string S) {
        int n=S.size();
        vector<vector<int>> DP(n,vector<int>(n,0));
        for(int i=0;i<n-1;i++){
            DP[i][i]=1;
            if(S[i]==S[i+1])
                DP[i][i+1]=1;
        }
        DP[n-1][n-1]=1;
        int Maximum=1;
        for(int length=3;length<=n;length++){
            for(int i=0;i<n-length-1;i++){
                int j=i+length-1;
                if(S[i]==S[j])
                    DP[i][j]=DP[i+1][j-1]+1;
                else{
                    DP[i][j]=max(DP[i][j-1],DP[i-1][j]);
                }
                    if(length>Maximum){
                        Maximum=length;
                        start=i;
                        end=j;
                    }
            }
        }
        string temp;
        for(int i=start;i<=end;i++){
            temp.push_back(S[i]);
        }
        return temp;
    }
};