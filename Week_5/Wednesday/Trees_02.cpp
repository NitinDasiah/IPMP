class Solution{
    public:
    int height(struct Node* node){
        if(node==NULL){
            return 0;
        }
        else{
            int l=height(node->left);
            int r=height(node->right);
            int highest=(l>r)?l:r;
            return highest+1;
        }
    }
};