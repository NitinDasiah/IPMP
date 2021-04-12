class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL&&l2!=NULL){
            return l2;
        }
        else if(l1!=NULL&&l2==NULL){
            return l1;
        }
        else if(l1==NULL&&l2==NULL){
            return NULL;
        }
        ListNode *head, *tail;
        if(l1->val<l2->val){
            head=l1;
            tail=l1;
            l1=l1->next;
        }
        else{
            head=l2;
            tail=l2;
            l2=l2->next;
        }
        while(l1!=NULL&&l2!=NULL){
            if(l1->val<l2->val){
                tail->next=l1;
                tail=tail->next;
                l1=l1->next;
            }
            else{
                tail->next=l2;
                tail=tail->next;
                l2=l2->next;
            }
        }
        if(l1!=NULL){
            tail->next=l1;
        }
        else if(l2!=NULL){
            tail->next=l2;
        }
        else if(l1!=NULL&&l2!=NULL){
            cout<<"Error";
        }
        return head;
    }
};
