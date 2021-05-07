class Solution
{
    int height(Node * root){
        if(root==NULL)
            return 0;
        else{
            int l=height(root->left);
            int r=height(root->right);
            return(l>r)?(l+1):(r+1);
        }
    }
    int getWidth(Node* root, int level){
        if(root==NULL){
            return 0;
        }
        if(level==1){
            return 1;
        }
        else if(level>1){
            return getWidth(root->left,level-1)+getWidth(root->right,level-1);
        }
    }
    public:
    int getMaxWidth(Node* root)
    {
        int maxWidth=0;
        int width;
        int h=height(root);
        for(int i=1;i<=h;i++){
            width=getWidth(root,i);
            if(width>maxWidth)
                maxWidth=width;
       }
       return maxWidth;
    }
};