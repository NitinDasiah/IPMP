class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {   
            for(int i=0;i<n-1;i++){
                for(int j=0;j<n-i-1;j++){
                    if(arr[j]>arr[j+1]){
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
            }
            int min=INT_MAX;
            int l=0,r=n-1;
            while(l<r){
                int temp=arr[l]+arr[r];
                if(abs(temp)<abs(min)){
                    min=temp;
                }
                if(temp==0){
                    break;
                }
                else if(temp<0){
                    l++;
                }
                else if(temp>0){
                    r--;
                }
            }
            return min;
        }
};