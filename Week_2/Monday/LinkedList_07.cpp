#include<unordered_map>

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        if(head==NULL){
            return;
        }
        Node* temp=head;
        unordered_map<Node*,bool> Map;
        Map[temp]=true;
        while(temp->next!=NULL&&Map[temp->next]==false){
            temp=temp->next;
            Map[temp]=true;
        }
        if(temp->next==NULL){
            return;
        }
        else{
            temp->next=NULL;
        }
    }
};
