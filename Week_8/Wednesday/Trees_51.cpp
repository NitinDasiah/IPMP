int countNodes(Node *head) { 
    int count = 0; 
    Node *temp = head; 
    while(temp!=NULL) 
    { 
        temp = temp->next; 
        count++; 
    } 
    return count; 
} 

Node* sortedListToBSTRecur(Node **head_ref, int n) { 
    if (n <= 0) 
        return NULL; 
    Node *left = sortedListToBSTRecur(head_ref, n/2); 
    Node *root = *head_ref; 
    root->prev = left; 
    *head_ref = (*head_ref)->next; 
    root->next = sortedListToBSTRecur(head_ref, n-n/2-1); 
  
    return root; 
} 

Node* sortedListToBST(Node *head) { 
    int n = countNodes(head); 
    return sortedListToBSTRecur(&head, n); 
} 
    
