class Solution {
    int Pivot(vector<int>& arr,int n){
        int i=0;
        while(i<n){
            if(arr[i]>arr[i+1]){
                return i;
            }
            else if(arr[n]<arr[n-1]){
                return n-1;
            }
            else{
                i++;
                n--;
            }
        }
        return arr.size()-1;
    }
    int binarySearch(vector<int>& arr, int low, int high, int target){
        if(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
            return mid;
            }
            else if(arr[mid]>target){
                return binarySearch(arr, low, mid-1, target);
            }
            else{
                return binarySearch(arr,mid+1,high,target);
            }
        }
        else
            return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int pivot=Pivot(nums,n);
        int index1=binarySearch(nums,0,pivot,target);
        int index2=binarySearch(nums,pivot+1,n,target);
        return index1>index2?index1:index2;
    }
};
