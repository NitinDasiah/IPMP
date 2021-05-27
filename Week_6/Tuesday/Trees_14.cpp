class Solution{
    int leafLevel;
    int height(Node* root){
        if(root==NULL)
            return 0;
        else{
            int l=height(root->left);
            int r=height(root->right);
            return (l>r)?l+1:r+1;
        }
    }
    
    bool searchLeaf(Node* root, int level){
        if(root==NULL){
            return true;
        }
        if(root->left==NULL&&root->right==NULL){
            if(level==leafLevel)
                return true;
            else
                return false;
        }
        else{
            return(searchLeaf(root->left,level+1)&&searchLeaf(root->right,level+1));
        }
    }
  public:
    bool check(Node *root)
    {
        leafLevel=height(root);
        return searchLeaf(root, 1);
    }
};