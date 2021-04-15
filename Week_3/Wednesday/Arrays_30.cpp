class Solution
{
    void swap(int *x, int *y){
        int temp=*x;
        *x=*y;
        *y=temp;
    }
    
    public:
    void sort012(int a[], int n)
    {
        int beg=0,mid=0,high=n-1;
        while(mid<=high){
            switch(a[mid]){
                case 0:
                    swap(&a[beg++],&a[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(&a[mid],&a[high--]);
                    break;
            }
        }
    }
    
};