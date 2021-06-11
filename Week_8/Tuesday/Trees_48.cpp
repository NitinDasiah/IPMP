class Solution{
    bool ancestor(Node* root, int target, vector<int>& arr){
        if(root==NULL)
            return false;
        else{
            if(root->data==target){
                return true;
            }
            else{
                if(ancestor(root->left, target, arr)||ancestor(root->right,target,arr)){
                    arr.push_back(root->data);
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    }
  public:
    vector<int> Ancestors(struct Node *root, int target)
    {
         vector<int> arr;
         ancestor(root,target, arr);
         return arr;
    }
};