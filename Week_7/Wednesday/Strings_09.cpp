class Solution{
    public:
    int atoi(string str)
    {
        int sum=0;
        bool negative=false;
        if(str[0]=='-'){
            negative=true;
            str.erase(0,1);
        }
        for(int i=0;i<str.size();i++){
            int num=str[i]-'0';
            if(0<=num&&num<=10){
                sum=sum+(num*pow(10,str.size()-i-1));
            }
            else{
                sum=-1;
                break;
            }
        }
        if(negative)
            sum=sum*(-1);
        return sum;
    }
};
