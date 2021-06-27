map<node*, int> lisof;

int LISS(node *root)
{
    if (root == NULL)
        return 0;
 
    if (lisof[root])
        return root->liss;
 
    if (root->left == NULL && root->right == NULL)
        return (lisof[root] = 1);

    int liss_excl = LISS(root->left) + LISS(root->right);

    int liss_incl = 1;
    if (root->left)
        liss_incl += LISS(root->left->left) + LISS(root->left->right);
    if (root->right)
        liss_incl += LISS(root->right->left) + LISS(root->right->right);

    lisof[root] = max(liss_incl, liss_excl);
 
    return lisof[root];
}