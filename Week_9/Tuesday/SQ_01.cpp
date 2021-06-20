int arr[101];
int top1=-1;
int top2=101;
//Function to push an integer into the stack1.
void twoStacks :: push1(int x)
{
    if(top1<top2-1){
        top1++;
        arr[top1]=x;
    }
    else{
        cout<<"Overflow";
        exit(1);
    }
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    if(top1<top2-1){
        top2--;
        arr[top2]=x;
    }
    else{
        cout<<"Overflow";
        exit(1);
    }
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    if(top1>=0){
        int x=arr[top1];
        top1--;
        return x;
    }
    else{
        return -1;
    }
}