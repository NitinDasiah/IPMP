int arr[100];

int top1=-1, top2=32, top3=65;

void push1(int x){
    if(top1<32){
        top1++;
        arr[top1]=x;
    }
    else{
        cout<<"Overflow";
    }
}

void push2(int x){
    if(top2<65){
        top2++;
        arr[top2]=x;
    }
    else{
        cout<<"Overflow";
    }
}

void push3(int x){
    if(top3<99){
        top3++;
        arr[top3]=x;
    }
    else{
        cout<<"Overflow";
    }
}

int pop1(){
    if(top1>-1){
        int x=arr[top1];
        top1--;
        return x;
    }
    else{
        cout<<"Underflow";
        return -1;
    }
}

int pop2(){
    if(top2>32){
        int x=arr[top2];
        top2--;
        return x;
    }
    else{
        cout<<"Underflow";
        return -1;
    }
}

int pop3(){
    if(top3>65){
        int x=arr[top3];
        top3--;
        return x;
    }
    else{
        cout<<"Underflow";
        return -1;
    }
}