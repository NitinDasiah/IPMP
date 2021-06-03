class Solution {
  public:
  
    int sum(Node* root){
        if(root==NULL)
            return 0;
        else{
            int l=sum(root->left);
            int r=sum(root->right);
            int c=root->data;
            root->data=l+r;
            return l+r+c;
        }
    }
    void toSumTree(Node *node)
    {
        sum(node);
    }
}