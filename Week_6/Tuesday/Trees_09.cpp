class Solution
{
    int height(Node * root){
        if(root==NULL)
            return 0;
        else{
            int r=height(root-> right);
            int l=height(root->left);
            return (l>r)?l+1:r+1;
        }
    }
    
    void LevelOrder(Node* root, int height, vector<Node*> levelOrder[]){
        if(root==NULL)
            return;
        LevelOrder(root->left,height+1,levelOrder);
        levelOrder[height].push_back(root);
        LevelOrder(root->right,height+1,levelOrder);
    }
    
    public:
    void connect(Node *root)
    {
        int h=height(root);
        vector<Node*> levelOrder[h];
        LevelOrder(root,0,levelOrder);
        for(int i=0;i<h;i++){
            int j;
            for( j=0;j<levelOrder[i].size()-1;j++){
                levelOrder[i][j]->nextRight=levelOrder[i][j+1];
            }
            levelOrder[i][j]->nextRight=NULL;
        }
    }    
      
};