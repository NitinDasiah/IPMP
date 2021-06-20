class Solution
{
    char reverse(char a){
        if(a=='}')
            return '{';
            
        else if(a==']')
            return '[';
            
        else if(a==')')
            return '(';
            
    }
    public:
    bool ispar(string x)
    {
        stack<char>s;
        for(int i=0;i<x.size();i++){
            if(x[i]=='{'||x[i]=='('||x[i]=='[')
                s.push(x[i]);
            else if(s.empty()||reverse(x[i])!=s.top())
                return false;
            else
                s.pop();
        }
        if(s.empty())
            return true;
        else
            return false;
    }

};