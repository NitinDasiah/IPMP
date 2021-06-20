class node{
    public:
        int data;
        node* next;
        node* prev;
        node(int data){
            this->data=data;
            next=NULL;
            prev=NULL;
        }
};

class stack{
    public:
        node* top;
        node* mid;
        unsigned count;
        stack(){
            top=NULL;
            mid=NULL;
            count=0;
        }
}

stack S1;

void push(int data){
    node* temp=new node(data);
    S1.count++;
    if(S1.count==1){
        S1.mid=temp;
        S1.top=temp;
    }
    else{
        temp->next=S1.top;
        S1.top->prev=temp;
        if(S1.count%2!=0)
            S1.mid=S1.mid->next;
    }
}

int pop(){
    if(S1.count==0){
        return -1;
    }
    else if(S1.count==1){
        S1.count=0;
        node* temp= S1.top;
        S1.top=NULL;
        S1.mid=NULL;
        int x=temp->data;
        delete temp;
        return x;
    }
    else if(S1.count>1){
        S1.count--;
        if(count%2==0){
            S1.mid=S1.mid->prev;
        }
        node* temp=S1.top;
        int x=temp->data;
        S1.top=NULL;
        delete temp;
        return x;
    }
}

int getmid(){
    return S1.mid->data;
}

void deleteMid(){
    node* temp=S1.mid;
    S1.count--;
    S1.mid=S1.mid->prev;
    S1.mid->next=temp->next;
    temp->next->prev=S1.mid;
    delete temp;
}

