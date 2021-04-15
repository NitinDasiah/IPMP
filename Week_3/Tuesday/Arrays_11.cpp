
class Solution{
    public:
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> answer;
        int n=arr.size();
        for(int i=0;i<n-4;i++){
            for(int j=i+1;j<n-3;j++){
                int l=j+1,r=n-1;
                int remain=k-arr[i]-arr[j];
                while(l<r){
                    int temp=arr[l]+arr[r];
                    if(temp==remain){
                        vector<int> t={arr[i],arr[j],arr[l],arr[r]};
                        answer.push_back(t);
                        r--;
                    }
                    else if(temp<remain){
                        l++;
                    }
                    else if(temp>remain){
                        r--;
                    }
                }
            }
        }
        sort(answer.begin(),answer.end());
        return answer;
    }
};