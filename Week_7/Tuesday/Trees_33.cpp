void mirror(Node* root){
    if(root==NULL)
        return;
    else{
        Node* temp=root->right;
        root->right=root->left;
        root->left=temp;
        mirror(root->left);
        mirror(root->right);
    }
}

bool isSame(Node* a, Node* b){
    if(a==NULL&&b==NULL)
        return true;
    else if(a!=NULL&&b!=NULL&&isSame(a->left,b->left)&&isSame(a->right,b->right))
        return true;
    else
        return false;
}

bool IsFoldable(Node* root)
{
    if(root==NULL)
        return true;
    mirror(root->left);
    return isSame(root->left,root->right);
}
