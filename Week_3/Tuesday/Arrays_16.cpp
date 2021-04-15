class Solution{
    public:
    int findMaxDiff(int A[], int n)
    {
        if(n<2){
            return -1;
        }
        int maxDifference=arr[1]-arr[0];
        int min=0;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[min]>maxDifference){
                maxDifference=arr[i]-arr[min];
            }
            if(arr[i]<arr[min]){
                min=i;
            }
        }
        return maxDifference;
    }
};