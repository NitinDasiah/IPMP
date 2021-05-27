int height(Node* root){
    if(root==NULL)
        return 0;
    else{
        int l=height(root->left);
        int r=height(root->right);
        return (l>r)?l+1:r+1;
    }
}

void LevelOrder(Node* root, int height, vector<int> levelOrder[]){
    if(root==NULL)
        return;
    else{
        LevelOrder(root->left,height+1,levelOrder);
        levelOrder[height].push_back(root->data);
        LevelOrder(root->right, height+1, levelOrder);
    }
}


vector<int> reverseLevelOrder(Node *root)
{
    int h=height(root);
    vector<int> levelOrder[h];
    LevelOrder(root, 0, levelOrder);
    vector<int> arr;
    for(int i=h-1;i>=0;i--){
        for(int j=0;j<levelOrder[i].size();j++){
            arr.push_back(levelOrder[i][j]);
        }
    }
    return arr;
}