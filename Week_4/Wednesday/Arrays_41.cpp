class Solution{
    public:
    int maxSubarraySum(int arr[], int n){
        
        int max = INT_MIN, maxCurrent = 0;
 
        for (int i = 0; i < n; i++){
            maxCurrent = maxCurrent + arr[i];
            if (max < maxCurrent)
                max = maxCurrent;
 
            if (maxCurrent < 0)
                maxCurrent = 0;
        }
        return max;
    }
};