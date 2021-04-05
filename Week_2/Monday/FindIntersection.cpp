class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int i=0;
        ListNode *temp1=headA,*temp2=headB;
        unordered_set<ListNode*> listA;
        while(temp1!=NULL){
            listA.insert(temp1);
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            if(listA.find(temp2)!=listA.end()){
                return temp2;
            }
            temp2=temp2->next;
        }
        return NULL;
    }
};