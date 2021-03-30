class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int table[n];
        for(int i=0;i<n;i++){
            table[i]=1;
        }
        int max=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]&&table[i]<table[j]+1){
                    table[i]=table[j]+1;
                    if(table[i]>max){
                        max=table[i];
                    }
                }    
            }
        }
        return max;
    }
};