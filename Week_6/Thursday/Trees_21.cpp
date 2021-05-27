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

vector<int> leftView(Node *root)
{
   int h=height(root);
   vector<int> arr[h];
   LevelOrder(root, 0, arr);
   vector<int> answer;
   for(int i=0;i<h;i++){
       answer.push_back(arr[i].front());
   }
   return answer;
}