class Solution{
    int max(int a, int b){
        return (a>b)?a:b;
    }
    int min(int a, int b){
        return (a<b)?a:b;
    }
    
    public:
    int trappingWater(int arr[], int n){
        int left[n],right[n];
        left[0]=arr[0];
        right[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],arr[i]);
        }
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],arr[i]);
        }
        int waterCollected=0;
        for(int i=0;i<n;i++){
            waterCollected+=(min(left[i],right[i])-arr[i]);
        }
        return waterCollected;
    }
};