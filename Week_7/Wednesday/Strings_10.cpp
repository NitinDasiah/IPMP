class Solution
{
    public:
    
    char nonrepeatingCharacter(string S)
    {
        int arr[256];
        memset(arr,-1,sizeof(arr));
        for(int i=0;i<S.size();i++){
            if(arr[S[i]]==-1)
                arr[S[i]]=i;
            else if(arr[S[i]]==-2)
                continue;
            else
                arr[S[i]]=-2;
        }
        int min=INT_MAX;
        for(int i=0;i<256;i++){
            if(arr[i]!=-1&&arr[i]!=-2&&arr[i]<min)
                min=arr[i];
        }
        if(min==INT_MAX)
            return '$';
        return S[min];
    }
};