class Solution
{
    public:

    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        priority_queue<int,vector<int>,greater<int>> nums;
        vector<int> sorted;
        for(int i=0;i<k;i++){
            for(int j=0;j<k;j++){
                nums.push(arr[j][i]);
            }
            sorted.push_back(nums.top());
            nums.pop();
        }
        while(!nums.empty()){
            sorted.push_back(nums.top());
            nums.pop();
        }
        return sorted;
    }
};