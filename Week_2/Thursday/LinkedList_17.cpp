class Solution
{
    public:
    Node* segregate(Node *head) {
        map<int,int> Hash;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==0)
                Hash[0]++;
            if(temp->data==1)
                Hash[1]++;
            if(temp->data==2)
                Hash[2]++;
            temp=temp->next;
        }
        temp=head;
        while(Hash[0]>0){
            temp->data=0;
            Hash[0]--;
            temp=temp->next;
        }
        while(Hash[1]>0){
            temp->data=1;
            Hash[1]--;
            temp=temp->next;
        }
        while(Hash[2]>0){
            temp->data=2;
            Hash[2]--;
            temp=temp->next;
        }
        return head;
    }
};
