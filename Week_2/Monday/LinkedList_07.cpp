class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        if(head->next->next==NULL){
            return head->next;
        }
        ListNode* temp1=head, *temp2 =head;
        while(temp2!=NULL&&temp2->next!=NULL){
            temp1=temp1->next;
            temp2=temp2->next->next;
        }   
        return temp1;
    }
};
