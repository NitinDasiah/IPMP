class Solution{
    public:
    
    int missingNumber(int arr[], int n) { 
        int hash[n+2];
        memset(hash,-1,sizeof(hash));
        for(int i=0;i<n;i++){
            if(arr[i]>=0&&arr[i]<=n+1){
                hash[arr[i]]=1;
            }
        }
        for(int i=1;i<=n+1;i++){
            if(hash[i]<0){
                return i;
            }
        }
    } 
};