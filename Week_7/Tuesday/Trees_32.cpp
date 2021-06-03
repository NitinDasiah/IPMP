bool isCompleteBT(Node* root){
        if(root==NULL)
            return true;
        else{
            queue<Node*> q;
            q.push(root);
            bool flag=false;
            while(!q.empty()){
                Node* temp=q.front();
                q.pop();
                if(temp->left){
                    if (flag == true)
                        return false;
 
                    q.push(temp->left);
                }
                else 
                    flag = true;
                if(temp->right){
                    if(flag==true)
                        return false;
                    q.push(temp->right);
                }
                else
                    flag=true;
            }
            return true;
        }
    }