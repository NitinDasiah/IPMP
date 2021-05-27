class Solution
{
    class Hash{
        public:
            char character;
            int count;
            Hash(char x){
                this->character=x;
                this->count=1;
            }
    };
    
    public:
    
    char nonrepeatingCharacter(string S)
    {
       list<Hash> hash;
        for(int i=0;i<S.size();i++){
            list<Hash>::iterator it;
            bool found=false;
            for(it=hash.begin();it!=hash.end();it++){
                if(it->character==S[i]){
                    it->count++;
                    found=true;
                    break;
                }
            }
            if(found==false){
                Hash obj(S[i]);
                hash.push_back(obj);
            }
        }
        list<Hash>::iterator it;
        for(it=hash.begin();it!=hash.end();it++){
            if(it->count==1)
                return it->character;
        }
        return '$';
    }
    
};