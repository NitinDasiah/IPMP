class Solution{
    void inOrder(Node* root, vector<int>& arr){
        if(root==NULL)
            return;
        else{
            inOrder(root->left, arr);
            arr.push_back(root->data);
            inOrder(root->right, arr);
        }
    }
    
  public:
    int isPairPresent(struct Node *root, int target){
        vector<int> arr;
        inOrder(root,arr);
        int l=0,r=arr.size()-1;
        while(l<r){
            int sum=arr[l]+arr[r];
            if(sum<target){
                l++;
                continue;
            }
            else if(sum>target){
                r--;
                continue;
            }
            else{
                return 1;
            }
        }
        return 0; 
    }
};
