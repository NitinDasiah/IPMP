void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void binSort(int A[], int N)
{
   int j=-1;
   for(int i=0;i<N;i++){
       if(A[i]==0){
           j++;
           swap(&A[i],&A[j]);
       }
   }
}