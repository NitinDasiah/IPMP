class Solution {
  public:
    string removeChars(string string1, string string2) {
        int arr[256];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<string2.size();i++){
            arr[string2[i]]++;
        }
        string temp;
        for(int i=0;i<string1.size();i++){
            if(arr[string1[i]]==0)
                temp.push_back(string1[i]);
        }
        return temp;
    }
};
