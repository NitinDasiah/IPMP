class Solution {
  public:
    double waterOverflow(int K, int R, int C) {
        double arr[R+1][R+1];
        memset(arr,0,sizeof(arr));
        arr[0][0]=K;
        for(int i=0;i<R;i++){
            for(int j=0;j<=i;j++){
                if(arr[i][j]>1){
                    double temp=arr[i][j]-1;
                    arr[i][j]=1;
                    arr[i+1][j]+=(temp/2);
                    arr[i+1][j+1]+=(temp/2);
                }
            }
        }
        return arr[R-1][C-1];
    }
};