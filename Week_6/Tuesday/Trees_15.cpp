void deleteTree(Node* root){
    if(root==NULL)
        return;
    else{
        deleteTree(root->left);
        deleteTree(root->right);
        delete(root);
    }
}