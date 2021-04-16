Node *swapkthnode(Node* head, int length, int k)
{
    if(length<k){
        return head;
    }
    if (2 * k - 1 == length){
        return head;
    }
    Node* x=head;
    Node* x_prev=NULL;
    for(int i=1;i<k;i++){
        x_prev=x;
        x=x->next;
    }
    Node* y=head;
    Node* y_prev=NULL;
    for(int i=1;i<length-k+1;i++){
        y_prev=y;
        y=y->next;
    }
    if(x_prev)
        x_prev->next=y;
    if (y_prev)
        y_prev->next = x;
    Node* temp = x->next;
    x->next = y->next;
    y->next = temp;
    if (k == 1)
        return y;
    if (k == length)
        return x;
    else
        return head;
}