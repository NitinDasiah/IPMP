class Solution{
    public:
    int longestUniqueSubsttr(string S){
        bool visited[26];
        for(int i=0;i<26;i++){
            visited[i]=false;
        }
        int start=0;
        int i=1;
        int n=S.size();
        int max=1;
        int current=1;
        visited[S[0]-'a']=true;
        while(i<n){
            while(visited[S[i]-'a']==true){
                visited[S[start]-'a']=false;
                start++;
                current--;
            }
            visited[S[i]-'a']=true;
            current++;
            i++;
            if(current>max)
                max=current;
        }
        return max;
    }
};