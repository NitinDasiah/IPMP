void LevelOrder(Node* root, int distance, int k,  vector<int>&arr){
    if(root==NULL)
        return;
    else{
        if(distance==k){
            arr.push_back(root->data);
            return;
        }
        else{
            LevelOrder(root->left,distance+1,k,arr);
            LevelOrder(root->right, distance+1, k, arr);
        }
    }
}

vector<int> Kdistance(struct Node *root, int k)
{
  vector<int> arr;
  LevelOrder(root,0,k,arr);
  return arr;
}