class Solution
{
    public:

    bool isIdentical(Node *r1, Node *r2)
    {
        if(r1==NULL&&r2==NULL){
            return true;
        }
        else if(r1!=NULL&&r2!=NULL){
            bool curr=(r1->data)==(r2->data);
            bool l=isIdentical(r1->left,r2->left);
            bool r=isIdentical(r1->right,r2->right);
            return curr&&l&&r;
        }
        return 0;
    }
};