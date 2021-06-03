int sumTree(Node* root){
    if(root==NULL)
        return 0;
    if(root->left==NULL&&root->right==NULL){
        return root->data;
    }
    else{
        int l=sumTree(root->left);
        int r=sumTree(root->right);
        if(l==-1||r==-1)
            return -1;
        if(root->data==l+r)
            return root->data;
        else 
            return -1;
    }
}

bool isSumTree(Node* root){
    if(sumTree==-1)
        return false;
    return true;
}