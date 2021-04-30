class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
        if(n==1)
            return 1;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum=sum+a[i];
        }
        long long right_sum=a[0];
        long long left_sum=sum-a[0];
        for(int i=1;i<n-2;i++){
            if(right_sum==left_sum-a[i]){
                return i+1;
            }
            else{
                right_sum=right_sum+a[i];
                left_sum=left_sum-a[i];
            }
        }
        return -1;
    }
};