class Solution{
    long long fac(long long n){
        if(n<=1){
            return 1;
        }
        else{
            return fac(n-1)*n;
        }
    }
    void populate(int count[], string s){
        for(int i=0;i<s.size();i++){
            count[s[i]]++;
        }
        for(int i=1;i<256;i++){
            count[i]+=count[i-1];
        }
    }
    void update(int count[], char ch){
        for(int i=ch;i<256;i++){
            count[i]--;
        }
    }
public:
    int rank(string s){
        int len=s.size();
        long long mul=fac((long long)len);
        int i, rank=1;
        int count[256];
        memset(count,0,sizeof(count));
        populate(count,s);
        for (i = 0; i < len; ++i) {
            mul /= len - i;
            rank += (count[s[i] - 1] * mul);
            update(count, s[i]);
        }
        return rank;
    }
};