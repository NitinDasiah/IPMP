void pusha(int x){
    Node* temp=new Node(x);
    if(a==NULL){
        a=temp;
    }
    else{
        Node* t=a;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=temp;
    }
}
void pushb(int x){
    Node* temp=new Node(x);
    if(b==NULL){
        b=temp;
    }
    else{
        Node* t=b;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=temp;
    }
}

void alternatingSplitList(struct Node* head) 
{
    a=NULL;
    b=NULL;
    int i=0;
    Node* temp=head;
    while(temp!=NULL){
        if(i%2==0)
            pusha(temp->data);
        else
            pushb(temp->data);
        temp=temp->next;
        i++;
    }
}