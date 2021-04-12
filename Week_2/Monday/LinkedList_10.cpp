#include<iostream>
using namespace std;

struct node{
    int val;
    node* next;
};

node* push(node* head, int x){
    node* temp=new node;
    temp->val=x;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        node* t=head;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=temp;
    }
    return head;
}

void pop(node* head){
    node* temp;
    while(head!=NULL){
        temp=head;
        head=head->next;
        delete temp;        
    }
}

bool check(node* head, int x){
    node* temp=head;
    while(temp!=NULL){
        if(temp->val==x){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

node* Union(node* headA, node* headB){
    node* head=NULL;
    node* temp=headA;
    while(temp!=NULL){
        head=push(head,temp->val);
        temp=temp->next;
    }
    temp=headB;
    while(temp!=NULL){
        if(!check(head,temp->val)){
            head=push(head,temp->val);
        }
        temp=temp->next;
    }
    return head;
}


int main(){
    int n;
    cin>>n;
    node* headA=NULL;
    int item;
    for(int i=0;i<n;i++){
        cin>>item;
        headA=push(headA,item);
    }
    cin>>n;
    node* headB=NULL;
    for(int i=0;i<n;i++){
        cin>>item;
        headB=push(headB,item);
    }
    node* head=Union(headA,headB);
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"\t";
        temp=temp->next;
    }
    pop(headA);
    pop(headB);
    pop(head);
}
