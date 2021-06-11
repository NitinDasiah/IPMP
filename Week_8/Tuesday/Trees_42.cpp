void inOrder(Node* root, int low, int high, vector<int>& arr){
    if(root!=NULL){
        if(root->data>=low){
            inOrder(root->left, low, high, arr);
        }
        if(root->data>=low&&root->data<=high)
            arr.push_back(root->data);
        if(root->data<=high){
            inOrder(root->right, low, high, arr);
        }
    }
}


vector<int> printNearNodes(Node *root, int low, int high)
{
    vector<int> arr;
    inOrder(root, low, high, arr);
    return arr;
}