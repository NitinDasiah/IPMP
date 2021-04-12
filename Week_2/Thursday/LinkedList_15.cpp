class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        node* temp=head;
        node* previous=NULL;
        node* next=NULL;
        int i=0;
        while(temp!=NULL&&i<k){
            next=temp->next;
            temp->next=previous;
            previous=temp;
            temp=next;
            i++;
        }
        if (next != NULL)
            head->next = temp;
        i=0;
        while(i<k-1&&temp!=NULL){
            temp=temp->next;
            i++;
        }
        if(temp != NULL) 
            temp->next = reverse(temp->next, k);
        return previous;
    }
};
