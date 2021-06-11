void findPaths(Node* root, vector<vector<int>>& arr, vector<int> temp){
    if(root==NULL)
        return;
    else{
        temp.push_back(root->data);
        if(root->left==NULL&&root->right==NULL){
            arr.push_back(temp);
            return;
        }
        findPaths(root->left, arr, temp);
        findPaths(root->right, arr, temp);
    }
}

vector<vector<int>> Paths(Node* root)
{
    vector<int> temp;
    vector<vector<int>> arr;
    findPaths(root, arr, temp);
    return arr;
}