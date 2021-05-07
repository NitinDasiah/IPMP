void inPlaceTransform(vector<vector<int>> Matrix, int r, int c){
    int originalR=r, originalC=c;
    while(r<c){
        vector<int> temp(c,0);
        Matrix.push_back(temp);
        r++;
    }
    while(c<r){
        for(int i=0;i<r;i++){
            Matrix[i].push_back(0);
        }
        c++;
    }
    for(int i=0;i<originalR;i++){
        for(int j=0;j<originalC-i;j++){
            int temp=Matrix[i][j];
            Matrix[i][j]=Matrix[j][i];
            Matrix[j][i]=temp;
        }
    }
    while(r>originalC){
        Matrix.pop_back();
    }
    while(c>originalR){
        for(int i=0;i<originalC;i++){
            Matrix[i].pop_back();
        }
    }
}