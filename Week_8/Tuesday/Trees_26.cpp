class Solution{
    Node* minValue(Node* root){
        Node* current=root;
        while(current->left!=NULL){
            current=current->left;
        }
        return current;
    }
    
  public:
    
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        if(x->right!=NULL)
            return minValue(x->right);
        
        Node* succesor=NULL;
        while (root != NULL)
        {
            if (x->data < root->data){
                succesor = root;
                root = root->left;
            }
            else if (x->data > root->data)
                root = root->right;
            else
                break;
        }
        return succesor;
    }
};