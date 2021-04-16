void mergeList(struct Node **p, struct Node **q)
{
    Node* pCurrent=*p;
    Node* qCurrent=*q;
    Node *pNext,*qNext;
    while(pCurrent!=NULL&&qCurrent!=NULL){
        pNext=pCurrent->next;
        qNext=qCurrent->next;
        
        qCurrent->next=pNext;
        pCurrent->next=qCurrent;
        
        pCurrent=pNext;
        qCurrent=qNext;
    }
    *q=qCurrent;
}