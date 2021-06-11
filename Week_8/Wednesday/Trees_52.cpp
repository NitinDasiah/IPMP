class Solution {
    class Node{
        public:
            int data;
            Node *left, *right;
            Node(int data){
                this->data=data;
                this->left=NULL;
                this->right=NULL;
            }
    };
    Node* BST(vector<int> nums, int low, int high){
        if(low>high)
            return NULL;
        else{
            int mid=(low+high)/2;
            Node* root= new Node(nums[mid]);
            root->left=BST(nums, low, mid-1);
            root->right=BST(nums,mid+1, high);
            return root;
        }
    }
    void preOrder(Node* root, vector<int>& arr){
        if(root==NULL)
            return;
        else{
            arr.push_back(root->data);
            preOrder(root->left,arr);
            preOrder(root->right,arr);
        }
    }
public:
    vector<int> sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        Node* root=BST(nums,0,n-1);
        vector<int> arr;
        preOrder(root, arr);
        return arr;
    }
};