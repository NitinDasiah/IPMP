class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> answer;
        for(int i=0;i<n;i++){
            if(arr[abs(arr[i])]>=0)
                arr[abs(arr[i])]=arr[abs(arr[i])]*(-1);
            else
                answer.push_back(abs(arr[abs(i)]));
        }
        if(answer.size()==0){
            answer.push_back(-1);
        }
        sort(answer.begin(),answer.end());
        vector<int>::iterator it;
        it=unique(answer.begin(),answer.end());
        answer.resize(distance(answer.begin(),it));
        return answer;
    }
};
