void inOrder(struct node* p, vector<node*>* inorder){
    if(p==NULL)
        return;
    else{
        inOrder(p->left,inorder);
        (*inorder).push_back(p);
        inOrder(p->right,inorder);
    }
}

void populateNext(struct node* p)
{
    vector<node*> inorder; 
    inOrder(p,&inorder);
    for(int i=0;i<inorder.size()-1;i++){
        inorder[i]->next=inorder[i+1];
    }
}