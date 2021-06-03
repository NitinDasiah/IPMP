class Solution{
    Node* KthNode(Node* root, int* t){
        if(root==NULL)
            return NULL;
            
        Node* left=KthNode(root->left, t);
        if(left!=NULL)
            return left;
        (*t)--;
        if((*t)==0)
            return root;
        return KthNode(root->right,t);
    }
  public:
    int KthSmallestElement(Node *root, int K)
    {
        int t=K;
        Node* temp=KthNode(root,&t);
        if(temp==NULL)
            return -1;
        else
            return temp->data;
    }
};