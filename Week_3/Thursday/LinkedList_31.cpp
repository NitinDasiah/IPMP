Node *copyList(Node *head) {
    unordered_map<Node*,Node*> myMap;
    Node* t=head;
    while(t!=NULL){
        Node* temp=new Node(t->data);
        myMap[t]=temp;
        t=t->next;
    }
    t=head;
    while(t!=NULL){
        Node* temp=myMap[t];
        temp->next=myMap[t->next];
        temp->arb=myMap[t->arb];
        t=t->next;
    }
    return myMap[head];
}