class Solution
{
    public:
    bool hasPathSum(Node *root, int S) {
        if(root==NULL){
            return (S==0);
        }
        else{
            bool test=false;
            int remaining=S-root->data;
            if(remaining==0&&root->left==NULL&&root->right==NULL){
                return true;
            }
            if(root->left){
                test=test|(hasPathSum(root->left,remaining));
            }
            if(root->right){
                test=test|hasPathSum(root->right, remaining);
            }
            return test;
        }
    }
};