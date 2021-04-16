class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        if(head==NULL||head->next==NULL){
            return head;
        }
        Node* next=head->next->next;
        Node* prev=head->next;
        Node* current=head;
        head->next->next=head;
        head=prev;
        current->next=pairWiseSwap(next);
        return head;
    }
};
