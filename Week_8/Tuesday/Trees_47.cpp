
void findMaxSum(Node* root, int currentSum, int* maxSum, Node**maxLeaf){
    if(root==NULL){
        return;
    }
    currentSum=currentSum+root->data;
    if(*maxSum<currentSum){
        *maxLeaf=root;
        *maxSum=currentSum;
    }
    findMaxSum(root->left,currentSum,maxSum,maxLeaf);
    findMaxSum(root->right, currentSum, maxSum, maxLeaf);
}

int maxSumPath(Node* root){
    int sum=0;
    Node* maxLeaf=NULL;
    findMaxSum(root,0,&sum,&maxLeaf);
    return maxLeaf;
}