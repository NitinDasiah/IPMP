class queue{
    stack<int> s1,s2;
    void push(int x){
        while(s1.size()>0){
            s2.push(s1.top());
            s1.pop();
        }
        s2.push(x);
        while(s2.size()>0){
            s1.push(s2.top());
            s2.pop();
        }
    }
    int pop(int x){
        if(s1.empty){
            return -1;
        }
        int x=s1.top();
        s1.pop();
    }
}