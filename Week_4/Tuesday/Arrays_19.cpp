class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        map<int,int> count;
        int sum[n];
        sum[0]=arr[0];
        count[sum[0]]++;
        for(int i=1;i<n;i++){
            sum[i]=sum[i-1]+arr[i];
            count[sum[i]]++;
            if(count[sum[i]]>1||sum[i]==0)
                return true;
        }
        return false;
    }
};