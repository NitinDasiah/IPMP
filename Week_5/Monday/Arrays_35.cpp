class Solution
{   
    public:
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        int R=matrix.size();
        int C=matrix[0].size();
        vector<int> rows(R);
        vector<int> columns(C);
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(matrix[i][j]==1){
                    rows[i]=1;
                    columns[j]=1;
                }
            }
        }
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(rows[i]==1||columns[j]==1){
                    matrix[i][j]=1;
                }
            }
        }
    }
};
