
class Solution
{
    public:
    Node* rotate(Node* head, int k)
    {
        int i=0;
        Node* end=head;
        while(end->next!=NULL){
            end=end->next;
        }
        while(i<k){
            Node* temp=head;
            head=head->next;
            end->next=temp;
            temp->next=NULL;
            end=temp;
            i++;
        }
        return head;
    }
};