class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        vector<int> answer;
        if(N<3){
            return answer;
        }
        int *low=new int[N];
        int *high=new int[N];
        low[0]=arr[0];
        for(int i=1;i<N;i++){
            if(arr[i]>low[i-1]){
                low[i]=low[i-1];
            }
            else{
                low[i]=arr[i];
            }
        }
        high[N-1]=arr[N-1];
        for(int i=N-2;i>=0;i--){
            if(high[i+1]>arr[i]){
                high[i]=high[i+1];
            }
            else{
                high[i]=arr[i];
            }
        }
        for(int i=1;i<N-1;i++){
            if(low[i-1]<arr[i]&&arr[i]<high[i+1]){
                answer.push_back(low[i-1]);
                answer.push_back(arr[i]);
                answer.push_back(high[i+1]);
                return answer;
            }
        }
    }
};