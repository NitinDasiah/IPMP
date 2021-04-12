void Solution(Node* A,Node* B, Node* C, int item){
    Node* TempA=A;
    while(TempA!=NULL){
        Node* TempB=B;
        while(TempB!=NULL){
            Node* TempC=C;
            while(TempC!=NULL){
                int sum=TempA->data+TempB->data+TempC->data;
                if(sum==item){
                    cout<<TempA->data<<" "<<TempB->data<<" "<<TempC->data;
                }
                TempC=TempC->next;
            }
            TempB=TempB->next;
        }
        TempA=TempA->next;
    }
}
