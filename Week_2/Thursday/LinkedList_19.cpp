bool check(char x){
    return x=='a'||x=='e'||x=='i'||x=='o'||x=='u';
}
    
    
Node* push(Node** head, char x){
    Node* temp=new Node(x);
    if(head==NULL){
        *head=temp;
        return *head;
    }
    Node* t=*head;
    while(t->next!=NULL){
        t=t->next;
    }
    t->next=temp;
    return *head;
}
    

Node* arrange(Node *head){
    Node *headEven=NULL, *headOdd=NULL;
    Node* temp=head;
    while(temp!=NULL){
        if(check(temp->data))
            headEven=push(&headEven,temp->data);
        else
            headOdd=push(&headOdd,temp->data);
        temp=temp->next;
    }
    Node* t=headEven;
    while(t->next!=NULL){
        t=t->next;
    }
    t->next=headOdd;
    return headEven;
}
