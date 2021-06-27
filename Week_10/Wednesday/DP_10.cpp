class Solution
{
    public:
    int longestSubsequence(int n, int a[])
    {
        int max=1;
        vector<int> list(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[j]<a[i]){
                    if(list[j]+1>list[i]){
                        list[i]=list[j]+1;
                        if(max<list[i])
                            max=list[i];
                    }
                }
            }
        }
        return max;
    }
};
