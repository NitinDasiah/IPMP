class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return true;
        }
        ListNode* temp=head;
        int length=0;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        if(length==1){
            return true;
        }
        list<int> stack;
        temp=head;
        for(int i=1;i<=floor(length/2);i++){
            stack.push_back(temp->val);
            temp=temp->next;
        }
        if(length%2!=0){
            temp=temp->next;
        }
        for(int i=floor(length/2)+1;i<=length;i++){
            if(temp==NULL&&stack.size()==0){
                return true;
            }
            if(temp->val!=stack.back()){
                return false;
            }
            else{
                temp=temp->next;
                stack.pop_back();
            }
        }
        return true;
    }
};