Node* merge(Node* a, Node* b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    Node* temp;
    if(a->data<b->data){
        temp=a;
        temp->bottom=merge(a->bottom,b);
    }
    else{
        temp=b;
        temp->bottom=merge(a,b->bottom);
    }
    temp->next=NULL;
    return temp;
}


Node *flatten(Node *root)
{
   if(root==NULL||root->next==NULL){
       return root;
   }
   else{
       return merge(root,flatten(root->next));
   }
}
