int Height(Node* root){
    if(root==NULL)
        return 0;
    else{
        int l=Height(root->left);
        int r=Height(root->right);
        if(l==INT_MIN||r==INT_MIN){
            return INT_MIN;
        }
        if(abs(l-r)<=1){
            return(l>r)?l+1:r+1;
        }
        else{
            return INT_MIN;
        }
    }
}

bool isBalanced(Node *root)
{
    int h=Height(root);
    if(h==INT_MIN)
        return false;
    else
        return true;
}