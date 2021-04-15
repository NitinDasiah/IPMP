class Solution{
    public:
    int factorial(int N){
        if(N<1){
            return 1;
        }
        else{
            return factorial(N-1)*N;
        }
    }
    
    pair<int,int> twoRepeated (int arr[], int N)
    {
        int sum=0,product=1;
        for(int i=0;i<N+2;i++){
            sum=sum+arr[i];
            product=product*arr[i];
        }
        int expectedSum=(N*(N+1))/2;
        int expectedProduct=factorial(N);
        int xplusy=sum-expectedSum;
        int xmulty=product/expectedProduct;
        int xminusy=sqrt(pow(xplusy,2)-4*xmulty);
        int x=(xplusy+xminusy)/2;
        int y=(x-xminusy);
        pair<int,int> XY;
        if(x<y){
            XY.first=x;
            XY.second=y;
        }
        else{
            XY.first=y;
            XY.second=x;
        }
        return XY;
    }
};