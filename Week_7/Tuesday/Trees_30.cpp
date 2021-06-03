class Solution
{
    void inOrder(Node* root, vector<int>& Order){
        if(root==NULL)
            return;
        else{
            inOrder(root->left,Order);
            Order.push_back(root->data);
            inOrder(root->right,Order);
        }
    }
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        vector<int>Order;
        inOrder(root,Order);
        for(int i=1;i<Order.size();i++){
            if(Order[i]<=Order[i-1]){
                return false;
            }
        }
        return true;
    }
};