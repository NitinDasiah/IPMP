class Solution{
    void removeChar(string& S, int index){
        int n=S.size();
        if(index==n-1){
            return;
        }
        else{
            if(S[index]==S[index+1]){
                S.erase(index+1,1);
                removeChar(S,index);
            }
            else{
                removeChar(S,index+1);
            }
        }
    }
    
    public:
    string removeConsecutiveCharacter(string S)
    {
        removeChar(S, 0);
        return S;
    }
};