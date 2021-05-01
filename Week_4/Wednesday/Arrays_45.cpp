class Solution{
  public:
    int maxLen(int arr[], int n){
        int hash[2*n+1];
        for(int i=0;i<2*n+1;i++){
            hash[i]=-1;
        }
        for(int i=0;i<n;i++){
            if(arr[i]==0)
                arr[i]=-1;
        }
        int sum=0;
        bool found=false;
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(sum==0){
                found=true;
                max=i+1;
            }
            if(hash[sum+n]==-1){
                hash[sum+n]=i;
            }
            else{
                if(i-(hash[sum+n])>max){
                    found=true;
                    max=i-hash[sum+n];
                }
            }
        }
        if(found==true)
            return max;
        return 0;
    }
};