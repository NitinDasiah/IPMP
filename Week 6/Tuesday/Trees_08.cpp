class Solution
{
    public:
    vector<int> levelOrder(Node* node)
    {
        vector<Node*> temp;
        temp.push_back(node);
        int i=0;
        while(i!=temp.size()){
            if(temp[i]->left!=NULL)
                temp.push_back(temp[i]->left);
            if(temp[i]->right!=NULL)
                temp.push_back(temp[i]->right);
            i++;
        }
        vector<int> answer;
        for(int i=0;i<temp.size();i++){
            answer.push_back(temp[i]->data);
        }
        return answer;
    }
};