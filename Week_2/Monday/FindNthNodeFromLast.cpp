class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return NULL;
        }
        int length=0;
        ListNode* temp=head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        if(length==n){
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        temp=head;
        for(int i=1;i<length-n;i++){
            temp=temp->next;
        }
        ListNode* t=temp->next;
        temp->next=temp->next->next;
        delete t;
        return head;
    }
};