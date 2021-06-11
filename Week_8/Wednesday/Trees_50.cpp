class Solution
{
    Node* answer(Node* root){
        if(root==NULL)
            return root;
        if(root->left){
            Node* left=answer(root->left);
            for(;left->right;left=left->right)
                ;
            left->right=root;
            root->left=left;
        }
        if(root->right!=NULL){
            Node* right=answer(root->right);
            for(;right->left;right=right->left)
                ;
            right->left=root;
            root->right=right;
        }
        return root;
    }
    
    public: 
    Node * bToDLL(Node *root)
    {
        if(root==NULL)
            return root;
        root=answer(root);
        while(root->left!=NULL){
            root=root->left;
        }
        return root;
    }
};