class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        Node* temp=head;
        if(head==NULL||head->next==NULL){
            return head;
        }
        else{
            temp=temp->next->next;
        }
        if(temp==NULL||temp->next==NULL){
            return head;
        }
        Node* next=temp->next->next;
        Node* prev=temp->next;
        Node* current=temp;
        temp->next->next=temp;
        temp=prev;
        current->next=pairWiseSwap(next);
        return head;
    }
};
