class Solution {

public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> arr=nums;
        int n=nums.size();
        sort(arr.begin(),arr.end());
        int start=n-1,end=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=nums[i]){
                start=i;
                break;
            }
        }
        for(int i=n-1;i>-1;i--){
            if(arr[i]!=nums[i]){
                end=i;
                break;
            }
        }
        cout<<start<<endl<<end;
        if(end>start){
            return end-start+1;
        }
        else
            return 0;
    }
};