class Solution{
public:
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        vector<vector<int>> Answer;
        if(n<=1)
            return Answer;
        int i=0;
        while(i<n-1){
            while((i<n-1)&&A[i]>=A[i+1])
                i++;
            if(i==n-1)
                break;
            vector<int> buy;
            buy.push_back(i++);
            while((i<n)&&A[i]>=A[i-1])
                i++;
            buy.push_back(i-1);
            Answer.push_back(buy);
        }
        return Answer;
    }
};