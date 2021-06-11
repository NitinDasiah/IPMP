vector<int> printAncestors(Node *root, int key)
{
    if (root == NULL) 
        return;

    stack<Node*> ancestor;
 

    while (1){

        while (root && root->data != key)
        {
            ancestor.push(root);   // push current node
            root = root->left;  // move to next node
        }

        if (root && root->data == key)
            break;

        if (ancestor.top()->right == NULL)
        {
            root = ancestor.top();
            ancestor.pop();
            while (!ancestor.empty() && ancestor.top()->right == root){
                root = ancestor.top();
                ancestor.pop();
            }
        }

        root = ancestor.empty()? NULL: ancestor.top()->right;
    }
 
    while (!ancestor.empty()){
        cout<<ancestor.top()->data<<" ";
        ancestor.pop();
    }
}