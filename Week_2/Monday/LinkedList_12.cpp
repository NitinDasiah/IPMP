void deleteAlt(struct Node *head){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL&&temp->next->next!=NULL){
        Node* t=temp->next;
        temp->next=temp->next->next;
        delete t;
        temp=temp->next;
    }
    if(temp->next!=NULL){
        Node* t=temp->next;
        temp->next=NULL;
        delete t;
    }
}
