class Solution{
    Node* push(Node* head, int x){
        Node* temp=new Node(x);
        if(head==NULL){
            head=temp;
            return head;
        }
        Node* t=head;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=temp;
        return head;
    }
public:
    Node* divide(int N, Node *head){
        Node *headEven=NULL, *headOdd=NULL;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data%2==0)
                headEven=push(headEven,temp->data);
            else
                headOdd=push(headOdd,temp->data);
            Node* t=temp;
            temp=temp->next;
            delete t;
        }
        Node* t=headEven;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=headOdd;
        return headEven;
    }
};