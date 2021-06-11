Node* removeOutsideRange(Node *root, int min, int max)
{
   if (root == NULL)
      return NULL;
   root->left =  removeOutsideRange(root->left, min, max);
   root->right =  removeOutsideRange(root->right, min, max);
 
   if (root->data < min)
   {
       Node *rChild = root->right;
       delete root;
       return rChild;
   }

   if (root->data > max)
   {
       Node *lChild = root->left;
       delete root;
       return lChild;
   }

   return root;
}