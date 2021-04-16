class Solution
{
    Node* push(Node** head,int x){
        Node* temp=new Node(x);
        if(*head==NULL){
            *head=temp;
        }
        else{
            Node*t =*head;
            temp->next=*head;
            *head=temp;
        }
        return *head;
    }
    
    
    int add(Node*first, Node*second, Node** temp){
            if(first==NULL&&second==NULL){
                return 0;
            }   
            int carry=add(first->next,second->next,temp);
            int sum=first->data+second->data+carry;
            push(temp,sum%10);
            return sum/10;
    }
    
    
    Node* addUtil(Node** first, Node** second){
        Node* temp=NULL;
        int finalCarry=add(*first,*second,&temp);
        if(finalCarry!=0){
            push(&temp,finalCarry);
        }
        return temp;
    }
    
    public:
    
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        int lengthFirst=0;
        Node* temp=first;
        while(temp!=NULL){
            lengthFirst++;
            temp=temp->next;
        }
        int lengthSecond=0;
        Node* temp2=second;
        while(temp2!=NULL){
            temp2=temp2->next;
            lengthSecond++;
        }
        
        while(lengthFirst<lengthSecond){
            push(&first,0);
            lengthFirst++;
        }
        while(lengthSecond<lengthFirst){
            push(&second,0);
            lengthSecond++;
        }
        Node* sum=addUtil(&first, &second);
        return sum;
    }
};
