Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node* temp1=head1;
    Node* temp2=head2;
    Node* head;
    if(temp1->data<temp2->data){
        head=temp1;
        temp1=temp1->next;
    }
    else{
        head=temp2;
        temp2=temp2->next;
    }
    Node* tail=head;
    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->data<temp2->data){
            tail->next=temp1;
            tail=tail->next;
            temp1=temp1->next;
        }
        else{
            tail->next=temp2;
            tail=tail->next;
            temp2=temp2->next;
        }
    }
    while(temp1!=NULL){
        tail->next=temp1;
        tail=tail->next;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        tail->next=temp2;
        tail=tail->next;
        temp2=temp2->next;
    }
    return head;
}  