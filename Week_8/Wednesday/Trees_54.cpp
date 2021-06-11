vector<int> inOrder(Node* root, vector<int>& arr){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    arr.push_back(root->data);
    inOrder(root->right);
}

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


Node* mergeTrees(Node* a, Node* b){
    vector<int> arr1,arr2, arr;
    inOrder(a, arr1);
    inOrder(b, arr2);
    int i=0,j=0;
    while(i<arr1.size()&&j<arr2.size()){
        if(arr1[i]==arr2[j]){
            arr.push_back(arr1[i]);
            i++; j++;
        }
        else if(arr1[i]<arr2[j]){
            arr.push_back(arr1[i]);
            i++;
        }
        else{
            arr.push_back(arr2[j]);
            j++;
        }
    }
    while(i<arr1.size()){
        arr.push_back(arr1[i]);
        i++;
    }
    while(j<arr2.size()){
        arr.push_back(arr2[j]);
        j++;
    }
    Node* root=BST(vector<int> arr, 0, arr.size()-1);
    return root;
}