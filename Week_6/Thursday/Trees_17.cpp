class Solution {
    int height(Node* root){
    if(root==NULL)
        return 0;
    else{
        int l=height(root->left);
        int r=height(root->right);
        return (l>r)?l+1:r+1;
    }
}

void LevelOrder(Node* root, int height, vector<Node*> levelOrder[]){
    if(root==NULL)
        return;
    else{
        LevelOrder(root->left,height+1,levelOrder);
        levelOrder[height].push_back(root);
        LevelOrder(root->right, height+1, levelOrder);
    }
}

void leafNode(Node* root, vector<Node*> leaf){
    if(root==NULL){
        return;
    }
    
    else{
        leafNode(root->left,leaf);
        if(root->left==NULL&&root->right==NULL){
            leaf.push_back(root);
        } 
        leafNode(root->right,leaf);
    }
}

public:
    vector <int> printBoundary(Node *root)
    {
        int h=height(root);
        vector<Node*> arr[h];
        vector<Node*> leaves;
        vector<int> answer;
        map<Node*,bool> pushed;
        LevelOrder(root,0,arr);
        leafNode(root, leaves);
        for(int i=0;i<h;i++){
            answer.push_back(arr[i].front()->data);
            pushed[arr[i].front()]=true;
        }
        for(int i=0;i<leaves.size();i++){
            if(pushed[leaves[i]]==false){
                pushed[leaves[i]]=true;
                answer.push_back(leaves[i]->data);
            }
        }
        for(int i=h-1;i>0;i--){
            if(pushed[arr[i].back()]==false){
                pushed[arr[i].back()]=true;
                answer.push_back(arr[i].back()->data);
            }
        }
        return answer;
    }
};