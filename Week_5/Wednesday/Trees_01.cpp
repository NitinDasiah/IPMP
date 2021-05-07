int getSize(Node* node)
{
   if(node==NULL)
    return 0;
    else{
        int l=getSize(node->left);
        int r=getSize(node->right);
        return (l+r+1);
    }
}