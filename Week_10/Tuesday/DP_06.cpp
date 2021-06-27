class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        int Max=INT_MIN;
       for(int i=1;i<n;i++){
           for(int j=1;j<m;j++){
               if(mat[i][j]==1){
                  int min=mat[i-1][j-1];
                    if(min<mat[i-1][j])
                        min=mat[i-1][j];
                    if(min<mat[i][j-1])
                        min=mat[i][j-1];
                    mat[i][j]=min+1;
               }
               else{
                   mat[i][j]=0;
               }
           }
       }
       return Max;
    }
};