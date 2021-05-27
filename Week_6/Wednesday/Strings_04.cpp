class Solution
{
    public:
    
    string reverseWords(string S) 
    { 
        vector<string> arr;
        string temp="";
        for(int i=0;i<S.size();i++){
            if(S[i]=='.'){
                arr.push_back(temp);
                temp="";
            }
            else{
                temp.push_back(S[i]);
            }
        }
        arr.push_back(temp);
        reverse(arr.begin(),arr.end());
        S="";
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){
                S.push_back(arr[i][j]);
            }
            S.push_back('.');
        }
        S.pop_back();
        return S;
    } 
};