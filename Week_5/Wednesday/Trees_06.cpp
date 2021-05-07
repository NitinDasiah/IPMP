class Solution
{
    void inorder(Node* root, vector<int>& arr){
        if(root!=NULL){
            inorder(root->left, arr);
            arr.push_back(root->data);
            inorder(root->right, arr);
        }
    }
    
    public:
    vector<int> inOrder(Node* root)
    {
        vector<int> arr;
        inorder(root, arr);
        return arr;
    }
};