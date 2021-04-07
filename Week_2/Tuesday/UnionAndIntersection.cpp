class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m)  {
        int u[n+m];
        int i=0,j=0,k=0;
        while(i<n&&j<m){
            if(a[i]==b[j]){
                u[k]=a[i];
                k++;i++;j++;
            }
            else if(a[i]<b[j]){
                u[k]=a[i];
                k++;i++;
            }
            else{
                u[k]=b[j];
                k++;j++;
            }
        }
        while(i<n){
            u[k]=a[i];
            k++;i++;
        }
        while(j<m){
            u[k]=b[j];
            k++;j++;
        }
        return k;
    }
    int doIntersection(int a[], int n, int b[], int m)  {
        int u[n+m];
        int i=0,j=0,k=0;
        while(i<n&&j<m){
            if(a[i]==b[j]){
                u[k]=a[i];
                k++;i++;j++;
            }
            else if(a[i]<b[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return k;
    }
};