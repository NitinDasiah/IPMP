class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode*temp =head->next;
        while(temp!=NULL){
            ListNode* t=head;
            while(t->next!=temp){
                t=t->next;
            }
            t->next=temp->next;
            temp->next=head;
            head=temp;
            temp=t->next;
        }
        return head;
    }
};
