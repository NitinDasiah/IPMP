class Solution
{
    bool Search(Node* root, int n){
        if(root==NULL){
            return false;
        }
        else if(root->data==n){
            return true;
        }
        else{
            return Search(root->right,n)|Search(root->left,n);
        }
    }
    
    public:
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       bool Search1left=Search(root->left,n1);
       bool Search2left=Search(root->left,n2);
       bool Search1right=Search(root->right,n1);
       bool Search2right=Search(root->right,n2);
       if(Search1left==true&&Search2left==true){
           return lca(root->left,n1,n2);
       }
       else if(Search1right==true&&Search2right==true){
           lca(root->right,n1,n2);
       }
       else{
           return root;
       }
    }
};