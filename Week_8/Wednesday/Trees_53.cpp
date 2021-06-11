int countLNodes(LNode *head) 
{ 
    int count = 0; 
    LNode *temp = head; 
    while(temp) 
    { 
        temp = temp->next; 
        count++; 
    } 
    return count; 
} 

TNode* sortedListToBSTRecur(LNode **head_ref, int n) { 
    if (n <= 0) 
        return NULL; 

    TNode *left = sortedListToBSTRecur(head_ref, n/2); 
  

    TNode *root = newNode((*head_ref)->data); 
    root->left = left; 
  

    *head_ref = (*head_ref)->next; 

    root->right = sortedListToBSTRecur(head_ref, n - n / 2 - 1); 
  
    return root; 
} 
  
TNode* sortedListToBST(LNode *head) { 
    int n = countLNodes(head); 
    return sortedListToBSTRecur(&head, n); 
}   