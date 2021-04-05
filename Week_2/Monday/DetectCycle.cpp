class Solution {
public:
    bool hasCycle(ListNode *head) {
        list<ListNode*> queue;
        if(head==NULL){
            return false;
        }
        ListNode* temp=head;
        while(temp!=NULL){
            for(auto& elm: queue){
                if(elm==temp){
                    return true;
                }
            }
            queue.push_back(temp);
            temp=temp->next;
        }
        return false;
    }
};