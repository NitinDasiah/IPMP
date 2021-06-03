void addGreaterUtil(Node* root, int* sum){
    if(root==NULL)
        return;
    else{
        addGreaterUtil(root->right, sum);
        *sum=*sum+root->data;
        root->data= (*sum);
        addGreaterUtil(root->left, sum);
    }
}

void addGreater(Node* root){
    int sum=0;
    addGreaterUtil(root,&sum);
}