class Solution
{
    int height(Node* root){
        if(root==NULL)
            return 0;
        else{
            int l=height(root->left);
            int r=height(root->right);
            int highest=(l>r)?l:r;
            return highest+1;
        }
    }
    public:
    int diameter(Node* root)
    {
        if(root==NULL){
            return 0;
        }
        else{
            int lheight=height(root->left);
            int rheight=height(root->right);
            int l=diameter(root->left);
            int r=diameter(root->right);
            int max=(l>r)?l:r;
            max=(max>(lheight+rheight+1))?max:(lheight+rheight+1);
            return max;
        }
    }

};