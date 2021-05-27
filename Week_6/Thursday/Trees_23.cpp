

void doubleTree(Node* root){
    if(root==NULL)
        return;
    else{
        Node* temp=createNewNode(root->data);
        temp->left=root->left;
        root->left=temp;
        doubleTree(temp->left);
        doubleTree(root->left);
    }
}