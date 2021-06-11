class Solution
{
    int test(Node* root){
        if(root==NULL)
            return 0;
        else{
            int l=test(root->left);
            int r=test(root->right);
            if(root->left==0&&root->right==0){
                return root->data;
            }
            else if(l+r!=root->data||l==-1||r==-1)
                return -1;
            else{
                return (l+r+root->data);
            }
        }
    }
    
    public:
    bool isSumTree(Node* root)
    {
        int sum=test(root);
        if(sum!=-1){
            return true;
        }
        else{
            return false;
        }
    }
};