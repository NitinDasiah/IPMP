class Solution {
    
    void correctBSTUtil(Node* root, Node**first, Node**middle, Node**last, Node**prev){
        if(root!=NULL){
            correctBSTUtil(root->left, first, middle, last, prev);
            if(((*prev)!=NULL)&&((root->data)<((*prev)->data))){
                if((*first)==NULL){
                    *first=*prev;
                    *middle=root;
                }
                else{
                    *last=root;
                }
            }
            *prev=root;
            correctBSTUtil(root->right, first, middle, last, prev);
        }
    }
    
public:

    void correctBST( struct Node* root )
    {
        struct Node *first, *middle, *last, *prev;
        first=middle=last=prev=NULL;
        correctBSTUtil(root,&first,&middle,&last,&prev);
        if(first&&last){
            int data=first->data;
            first->data=last->data;
            last->data=data;
        }
        else if(first&&middle){
            int data=first->data;
            first->data=middle->data;
            middle->data=data;
        }
    }
    
};