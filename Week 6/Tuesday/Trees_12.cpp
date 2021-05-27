class Solution{
    map<int, int> Map;
    void verticalSum(Node* root, int distance){
        if(root==NULL){
            return;
        }
        else{
            verticalSum(root->left,distance-1);
            Map[distance]+=root->data;
            verticalSum(root->right,distance+1);
        }
    }
    
  public:
    vector <int> verticalSum(Node *root) {
        verticalSum(root,0);
        vector<int> arr;
        map<int, int>::iterator itr;
        for(itr=Map.begin();itr!=Map.end();itr++){
            arr.push_back(itr->second);
        }
        return arr;
    }
};