#include<iostream>
using namespace std;

struct node{
    int value;
    node* next;
}*head;

void push(int x){
    node* temp=new node;
    temp->value=x;
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
}

void Delete(){
    node* temp;
    while(head!=NULL){
        temp=head;
        head=head->next;
        delete temp;        
    }
}


int main(){
    int n;
    cin>>n;
    int item;
    for(int i=0;i<n;i++){
        cin>>item;
        push(item);
    }
    printReverse(head);
}