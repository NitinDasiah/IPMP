class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s){
        int l=0,r=0;
        int sum=arr[0];
        bool found=false;
        while(l<n&&r<n){
            if(sum==s){
                found=true;
                break;
            }
            else if(sum<s){
                r++;
                sum=sum+arr[r];
            }
            else{
                sum=sum-arr[l];
                l++;
            }
        }
        vector<int> answer;
        if(found==true){
            answer.push_back(l+1);
            answer.push_back(r+1);
        }
        else{
            answer.push_back(-1);
        }
        return answer;
    }
};