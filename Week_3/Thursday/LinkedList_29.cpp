class Solution{
    void split(Node* head, Node**a, Node** b){
        Node *slow=head, *fast=head->next;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
        *a=head;
        *b=slow->next;
        slow->next=NULL;
    }
    
    Node* merge(Node* a, Node* b){
        if(a==NULL&&b==NULL){
            return NULL;
        }
        if(a==NULL&&b!=NULL){
            return b;
        }
        if(a!=NULL&&b==NULL){
            return a;
        }
        Node* temp=NULL;
        if(a->data<=b->data){
            temp=a;
            temp->next=merge(a->next,b);
        }
        else{
            temp=b;
            temp->next=merge(a,b->next);
        }
        return temp;
    }
    
  public:
    Node* mergeSort(Node* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        Node *a, *b;
        split(head,&a,&b);
        a=mergeSort(a);
        b=mergeSort(b);
        head=merge(a,b);
        return head;
    }
};