int matSearch (int N, int M, int matrix[][M], int x)
{
    int i=0,j=0;
    while(i>=0&&i<N&&j>=0&&j<M){
        if(matrix[i][j]==x){
            return 1;
        }
        else if(matrix[i][j]<x&&(j<M-1&&matrix[i][j+1]<=x)){
            j++;
        }
        else if(matrix[i][j]<x&&(j==M-1||matrix[i][j+1]>x)){
            i++;
        }
        else if(matrix[i][j]>x&&(i!=0)){
            j--;
        }
        else
            break;
    }
    return 0;
}