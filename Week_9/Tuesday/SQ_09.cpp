class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n){
       vector<int> answer(n);
       answer[0]=1;
       for(int i=1;i<n;i++){
            int counter = 1;
            while ((i - counter) >= 0 && price[i] >= price[i - counter]) {
                counter += answer[i - counter];
            }
        answer[i] = counter;
       }
       return answer;
    }
};
