class Solution{
    int sum;
    void difference(Node* root, bool odd){
        if(root==NULL)
            return;
        if(odd){
            sum=sum+(root->data);
            difference(root->left, false);
            difference(root->right,false);
        } 
        else{
            sum=sum-(root->data);
            difference(root->left,true);
            difference(root->right, true);
        }
    }
    
  public:
    int getLevelDiff(Node *root)
    {
        sum=0;
        difference(root,true);
        return sum;
    }
};
