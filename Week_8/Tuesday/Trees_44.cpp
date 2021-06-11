Node* Pruning(Node* root, int k, int * sum){
    if(root==NULL)
        return NULL;
    else{
        int l=*sum+root->data;
        int r=l;
        root->left=Pruning(root->left, k, &l);
        root->right=Pruning(root->right, k, &r);
        *sum=(l>r)?l:r;
        if(sum<k){
            delete root;
            return NULL;
        }
        return root;
    }
}

Node *prune(Node *root, int k)
{
    int sum = 0;
    return Pruning(root, k, &sum);
}