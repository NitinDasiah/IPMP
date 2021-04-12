class Solution{
    public:
    vector<int> twoOddNum(int nums[], int n)  
    {
        int sum=nums[0];
        for(int i=1;i<n;i++){
            sum=(sum^nums[i]);
        }
        int set=sum&(~(sum-1));
        vector<int> result;
        result.push_back(0);
        result.push_back(0);
        for(int i=0;i<n;i++){
            if(!(set&nums[i])){
                result[1]=(result[1]^nums[i]);
            }
            else{
                result[0]=(result[0]^nums[i]);
            }
        }
        if(result[0]<result[1]){
            int temp=result[0];
            result[0]=result[1];
            result[1]=temp;
        }
        return result;
    }
};
