class stack{
    queue<int> q1,q2;
    public:
    void push(int x){
        q1.push(x);
    }
    int pop(){
        if(q2.size()==0){
            return -1;
        }
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int x=q1.front();
        q1.pop();
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }
}